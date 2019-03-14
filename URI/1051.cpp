#include <bits/stdc++.h>
using namespace std;
int main(){
 double x, i;
 cin>>x;
 if(x<=2000) i=0;
 else if (x<=3000) i=x*0.08;
 else if(x<=4500) i=x*.18;
 else i=x*0.28;
 if(i==0) cout<<"Isento\n";
 else cout<<"R$ "<<fixed<<setprecision(2)<<i<<"\n";
 return 0;
}
