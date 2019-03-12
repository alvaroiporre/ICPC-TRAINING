#include<bits/stdc++.h>
using namespace std;
int main(){
    int c;
    cin>>c;
    cin.ignore();
    string cad;
    /*
4
RD TQIJW GWTYMJWX INFWD JSYWNJX ZXJ F XNRUQJ JSHWDUYNTS YJHMSNVZJ
THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG
XVIDRE TFCCVXZRKV GIFXIRDDZEX TFEKVJK UVTIPGKZFE
XVIDRE TFCCVXZRKV GIFXIRDDZEX TFEKVJK


    */
    while(c--){
        int rlet[27]={};
        getline(cin,cad);
        int ma=-1;
        char l;
        for(int i=0;i<cad.size();i++){
            if(cad[i]!=' '){
                rlet[(int)(cad[i]-'A')]++;
                if(ma<rlet[(int)(cad[i]-'A')]){
                    ma=rlet[(int)(cad[i]-'A')];
                    l=cad[i];
                }
            }
        }
        int r=(int)(l-'E');
        int u=0;
        for(int i=0;i<27;i++){
            if(rlet[i]==ma){
                u++;
            }
        }
            //cout<<ma<<" "<<u;
        if(u==1){
            cout<<r<<" ";
            for(int i=0;i<cad.size();i++){
                if(cad[i]!=' '){
                    if(cad[i]-r-'A'<0){
                        cout<<(char)((cad[i]+r)%25+'A'+1);
                    }else{
                        cout<<(char)(cad[i]-r);
                    }
                }else{
                    cout<<cad[i];
                }
            }
            cout<<endl;
        }else{
            cout<<"NOT POSSIBLE\n";
        }
    }
    return 0;
}
