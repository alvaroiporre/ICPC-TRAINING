#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> numeros;
    vector<int> tnum;
    string a;
    int tam=-1,b;
    while(cin>>a&&a!="0"){
        numeros.push_back(a);
        b=a.size();
        tnum.push_back(b);
        if(b>=tam) tam=b;
    }
    vector<int>result(tam+1);
    int res=0;
    for(int i=0;i<tam;i++){
        for(int j=0;j<numeros.size();j++){
            if(tnum[j]-i>0){
                res+=(int)(numeros[j][tnum[j]-i-1]-'0');
            }
        }
        result[tam-i]=(res%10);
        res/=10;
    }
    if(res>0)result[0]=(res);
    if(result[0]!=0)cout<<result[0];
    for(int i=1;i<=tam;i++){
        if(result[i]!=0){
            for(int j=i;j<=tam;j++)
                cout<<result[j];
        break;
        }
    }
    cout<<endl;
    return 0;
}
