#include<bits/stdc++.h>
#define forn(i,n) for(int i=0;i<int(n);i++)
using namespace std;
int main(){
    int n,m,a,b;
    while(cin>>n>>m){
        vector<int>nod[n+1];
        bool aprob[n+1]={false};
        bool aprob1[n+1]={false};
        int corr[n+1]={0};
        forn(i,m){
            cin>>a>>b;
            nod[a].push_back(b);
            corr[b]++;
        }
        int con=0;
        forn(i,n){
            int a;
            cin>>a;
            aprob1[a]=true;
            if(corr[a]==0){
                stack<int>s;
                s.push(a);
                while(!s.empty()){
                    int S=s.top();
                    s.pop();
                    aprob[S]=true;
                    con++;
                    forn(j,nod[S].size()){
                        corr[nod[S][j]]--;
                        if(aprob1[nod[S][j]]&&!aprob[nod[S][j]]&&corr[nod[S][j]]==0){
                            s.push(nod[S][j]);
                        }
                    }
                }
            }
            cout<<con<<endl;
        }
    }
    return 0;
}
