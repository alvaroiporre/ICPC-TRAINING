#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n&&n){
        long long his[n];
        for(int i=0;i<n;i++){
            cin>>his[i];
        }
        stack<int> s;
        long long top=0,a=0,am=-1,i=0;
        while (i < n){
            if (s.empty()||his[s.top()]<=his[i])s.push(i++);
            else{
                top = s.top();
                s.pop();
                a = his[top]*(s.empty()?i:i-s.top()-1);
                am=max(am,a);
            }
        }
        while (!s.empty()){
            top = s.top();
            s.pop();
            a= his[top]*(s.empty()?i:i-s.top()-1);
            am=max(am,a);
        }
        cout<<am<<"\n";
    }

    return 0;
}
