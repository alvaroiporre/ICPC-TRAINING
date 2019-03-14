#include<bits/stdc++.h>
using namespace std;
int main(){
    string x,y="";
    cin>>x;
    for(int i=0;i<x.length();i++){
        if(x[i]=='0')y+="000";
        if(x[i]=='1')y+="001";
        if(x[i]=='2')y+="010";
        if(x[i]=='3')y+="011";
        if(x[i]=='4')y+="100";
        if(x[i]=='5')y+="101";
        if(x[i]=='6')y+="110";
        if(x[i]=='7')y+="111";
    }
    while(y.length()%4!=0){
        y="0"+y;
    }
    string z="";
    for(int i=0;i<y.length();i+=4){
        if(y.substr(i,4)=="0000")z+="0";
        if(y.substr(i,4)=="0001")z+="1";
        if(y.substr(i,4)=="0010")z+="2";
        if(y.substr(i,4)=="0011")z+="3";
        if(y.substr(i,4)=="0100")z+="4";
        if(y.substr(i,4)=="0101")z+="5";
        if(y.substr(i,4)=="0110")z+="6";
        if(y.substr(i,4)=="0111")z+="7";
        if(y.substr(i,4)=="1000")z+="8";
        if(y.substr(i,4)=="1001")z+="9";
        if(y.substr(i,4)=="1010")z+="A";
        if(y.substr(i,4)=="1011")z+="B";
        if(y.substr(i,4)=="1100")z+="C";
        if(y.substr(i,4)=="1101")z+="D";
        if(y.substr(i,4)=="1110")z+="E";
        if(y.substr(i,4)=="1111")z+="F";
    }
    int flag=-1;
    for(int i=0;i<z.length();i++){
        if(z[i]!='0'){
            flag=i;
            break;
        }
    }
    if(flag!=-1)cout<<z.substr(flag,z.length()-flag)<<endl;
    else cout<<0<<endl;
    return 0;
}
