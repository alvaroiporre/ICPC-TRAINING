#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(cin>>s&&s!="*"){
        int c=0;
        int x=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='/'){
                if(x==64){
                    c++;
                }
                x=0;
            }else if(s[i]=='W')x+=64;
            else if(s[i]=='H')x+=32;
            else if(s[i]=='Q')x+=16;
            else if(s[i]=='E')x+=8;
            else if(s[i]=='S')x+=4;
            else if(s[i]=='T')x+=2;
            else if(s[i]=='X')x+=1;
        }
        cout<<c<<"\n";
    }

    return 0;
}



