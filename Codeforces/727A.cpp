#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,cont=1;
    cin>>a>>b;
    bool yes=true;
    stack<int>q;
    q.push(b);
    while(b>a){
        cont++;
        if((b-1)%10==0){
            b--;
            b/=10;
        }else if(b%2==0){
            b/=2;
        }else{
            yes=false;
            break;
        }
        q.push(b);
    }
    if(yes&&b==a){
        cout<<"YES\n";
        cout<<cont<<"\n";
        while(!q.empty()){
            cout<<q.top()<<" ";
            q.pop();
        }
        cout<<"\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}
