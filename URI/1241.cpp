#include<iostream>
using namespace std;
int main(){
    int c;
    cin>>c;
    while(c--){
        string a,b;
        cin>>a>>b;
        int ta=a.size(),tb=b.size();
        if(ta>=tb){
            //cout<<"--"<<a.substr(ta-tb,tb)<<endl;
            if(a.substr(ta-tb,tb)==b)cout<<"encaixa\n";
            else cout<<"nao encaixa\n";
        }else cout<<"nao encaixa\n";
    }
    return 0;
}
