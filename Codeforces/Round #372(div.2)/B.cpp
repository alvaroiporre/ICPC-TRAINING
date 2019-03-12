#include <iostream>
using namespace std;
string alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(){
    string other, subc;
    cin>>other;
    int i,j=0;
    if(other.length()>25){
        for(i=0;i<other.length()-25;i++){
            bool v=0;
            if(other[i]==alphabet[0]||other[i]=='?'){
                for(int k=i, l=0;l<26;k++,l++){
                    if(other[k]==alphabet[l]||other[k]=='?'){
                        other[k]=alphabet[l];
                        v=1;
                    }
                    else{
                        v=0;
                        break;
                    }
                }
                if(v){
                    j++;
                    i+=26;
                }
            }
        }
    }

    if(j)cout<<other;
    else cout<<-1;
    return 0;
}
