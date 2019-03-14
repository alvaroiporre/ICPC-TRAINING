#include <iostream>


const bool debug = true;
const bool debug2 = false;

unsigned nextIndex( unsigned currentIndex )
{
   return 4 == currentIndex ? 0 : 1 + currentIndex;
}

unsigned prevIndex( unsigned currentIndex )
{
   return 0 == currentIndex ? 4 : currentIndex - 1;
}

const unsigned INVALID_INDEX = 9999;

unsigned findIndexOfLowestNegative( int p[] )
{
   unsigned indexOfLowestNegative = INVALID_INDEX; // start with invalid number
   int lowestNegativeValue = 0; // start too high

   for( unsigned i=0; i<5; ++i )
   {
      d2print( "i=" << i );

      if( p[i] < lowestNegativeValue )
      {
         indexOfLowestNegative = i;
         lowestNegativeValue = p[i];
      }
   }

   return indexOfLowestNegative;
}
using namespace std;
int main()
{
   unsigned numPentagons;
   cin>> numPentagons;


   for( unsigned caseNum = 1; caseNum <= numPentagons; ++caseNum )
   {
      int p[5];
      cin>> p[0] >> p[1] >> p[2] >> p[3] >> p[4];

      unsigned stepNum, indexOfLowestNegative;
      for( stepNum = 1, indexOfLowestNegative = findIndexOfLowestNegative( p );
         INVALID_INDEX != indexOfLowestNegative;
         ++stepNum, indexOfLowestNegative = findIndexOfLowestNegative( p ) )
      {


         p[indexOfLowestNegative] = -p[indexOfLowestNegative];

         unsigned neighborIndex;

         neighborIndex = nextIndex( indexOfLowestNegative );

         p[neighborIndex] -= p[indexOfLowestNegative];

         neighborIndex = prevIndex( indexOfLowestNegative );

         p[neighborIndex] -= p[indexOfLowestNegative];


      }



      cout << "Pentagon #" << caseNum << ":" << std::endl;
      cout << p[0] << " "
                << p[1] << " "
                << p[2] << " "
                << p[3] << " "
                << p[4] << endl;

   }


   return 0;
}

