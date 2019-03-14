#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    while(cin>>n&&n>0){
        stack<int>s;
        b=1;
        for(int i=1;i<=n;i++){
            cin>>a;
            if(a==b){
                b++;
                //cout<<a<<"-entra\n";
            }else{
                if(!s.empty()&&s.top()==b){
                    while(!s.empty()&&s.top()==b){
                        //cout<<b<<"-salepila1\n";
                        b++;
                        s.pop();
                    }
                }
                s.push(a);
            }
        }
        if(s.empty()){
            cout<<"yes\n";
        }else{
            while(!s.empty()){
                if(s.top()==b){
                    //cout<<b<<"-salepila2\n";
                    s.pop();
                    b++;
                }else{
                    //cout<<b<<" "<<s.top()<<"\n";
                    break;
                }
            }
            cout<<((s.empty())?"yes\n":"no\n");
        }
    }
    return 0;
}
