#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string x;
    cin>>t;
    cin.ignore();
    while(t--){
        vector<int>alf(26,0);
        getline(cin,x);
        int let=0;
        for(int i=0;i<x.size();i++){
            if(x[i]>='a'&&x[i]<='z'){
                if(!alf[(int)(x[i]-'a')]){
                    alf[(int)(x[i]-'a')]++;
                    let++;
                }
            }
        }
        if(let==26)cout<<"frase completa\n";
        else if(let>=13)cout<<"frase quase completa\n";
        else cout<<"frase mal elaborada\n";
    }

    return 0;
}
