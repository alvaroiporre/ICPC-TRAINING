#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string cad;
    cin>>n;
    while(n--){
        cin>>cad;
        stack<char>q;
        int open=0;
        for(int i=0;i<cad.size();i++){
            if(cad[i]=='(')open++;
            else if(cad[i]==')'){
                open--;
                if(!q.empty()){
                    cout<<q.top();
                    q.pop();
                }
            }else if(cad[i]=='+'||cad[i]=='-'||cad[i]=='*'||cad[i]=='/'||cad[i]=='^')q.push(cad[i]);
            else cout<<cad[i];
        }
        cout<<endl;
    }
    return 0;
}
