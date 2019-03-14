#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        stack<char>q;
        int e=0;
        while(n!=0){
           if(n%3==0){q.push('0');n/=3;}
           else if((n+1)%3==0){q.push('-');n++;n/=3;}
           else {q.push('+');n/=3;}
        }
        while(!q.empty()){
            cout<<q.top();
            q.pop();
        }
        cout<<endl;
    }
    return 0;
}
