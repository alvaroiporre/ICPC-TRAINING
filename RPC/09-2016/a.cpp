#include <iostream>
#include <cstdio>
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;
int N, x;
long memo[8][100];
int C[8];
long go(int c, int n)
	{
		if (n==N)
			return 1;
		if (n>N || c==8)
			return 0;
		if (memo[c][n] > -1)
			return memo[c][n];
		return memo[c][n] = go(c,n+C[c])+go(c+1,n);
	}

int main(){

		scanf("%d",&N);
		for(int ds=1; ds<=N; ds++)
		{
			for (int i=0; i<8; ++i)
				cin>>C[i];
			cin>>x;
			long res = go(1,x);
//			long res = go(0,7,N);
			printf("Equation #%d: %d%\n",ds,res);
		}
    return 0;
}


