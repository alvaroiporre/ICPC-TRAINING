#include<bits/stdc++.h>
using namespace std;

class ArmySize{
public:

    vector<string> getSum(vector<string>x){
        int cmin=0,cmax=0;
        vector<string> r;
        for(int i=0;i<x.size();i++){
            if(x[i]=="Few"){
                cmin+=1;
                cmax+=4;
            }else if(x[i]=="Several"){
                cmin+=5;
                cmax+=9;
            }else if(x[i]=="Pack"){
                cmin+=10;
                cmax+=19;
            }else if(x[i]=="Lots"){
                cmin+=20;
                cmax+=49;
            }else if(x[i]=="Horde"){
                cmin+=50;
                cmax+=99;
            }else if(x[i]=="Throng"){
                cmin+=100;
                cmax+=249;
            }else if(x[i]=="Swarm"){
                cmin+=250;
                cmax+=499;
            }else if(x[i]=="Zounds"){
                cmin+=500;
                cmax+=999;
            }else if(x[i]=="Legion"){
                cmin+=1000;
                cmax+=1001;
            }
        }
        if((cmin>=1&&cmin<=4)||(cmax>=1&&cmax<=4)){
            r.push_back("Few");
        }
        if((cmin>=5&&cmin<=9)||(cmax>=5&&cmax<=9)){
            r.push_back("Several");
        }
        if((cmin>=10&&cmin<=19)||(cmax>=10&&cmax<=19)){
            r.push_back("Pack");
        }
        if((cmin>=20&&cmin<=49)||(cmax>=20&&cmax<=49)){
            r.push_back("Lots");
        }
        if((cmin>=50&&cmin<=99)||(cmax>=50&&cmax<=99)){
            r.push_back("Horde");
        }
        if((cmin>=100&&cmin<=249)||(cmax>=100&&cmax<=249)){
            r.push_back("Throng");
        }
        if((cmin>=250&&cmin<=499)||(cmax>=250&&cmax<=499)){
            r.push_back("Swarm");
        }
        if((cmin>=500&&cmin<=999)||(cmax>=500&&cmax<=999)){
            r.push_back("Zounds");
        }
        if((cmin>=1000)||(cmax>=1000)){
            r.push_back("Legion");
        }
        return r;
    };
};


int main(){


    return 0;
}
