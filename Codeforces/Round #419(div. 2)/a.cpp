#include <bits/stdc++.h>
using namespace std;
int rev(int x){
    return (x%10)*10+(x/10);
}
int main(){
    string hora;
    cin>>hora;
    int a=(int)(hora[0]-'0'),
    b=(int)(hora[1]-'0'),
    c=(int)(hora[3]-'0'),
    d=(int)(hora[4]-'0');
    int h=(a*10+b)%24;
    int m=(c*10+d)%60;
    int con=0;
    while(h!=rev(m)){
        m++;
        if(m==60){
            m=0;
            h+=1;
            h%=24;
        }
        con++;
    }
    cout<<con<<endl;
    return 0;
}
