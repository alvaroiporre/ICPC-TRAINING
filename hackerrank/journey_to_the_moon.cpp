#include<bits/stdc++.h>

using namespace std;
using namespace std;
stack<int> s;
int dfs(vector<int> g[],bool taken[],int val)
{
	s.push(val);
	int count=1;
	taken[val]=true;
	while(!s.empty())
	{
		int x=s.top();

		for(int i=0;i<g[x].size();i++)
		{

			if(!taken[g[x][i]])
			{
				taken[g[x][i]]=true;
				s.push(g[x][i]);
				count++;
				x=s.top();
				i=-1;
			}
		}
		s.pop();
	}
	return count;
}
int main(){
    int n,p,a,b;
    cin>>n>>p;
    vector<int>lista[n+1];
    bool visit[100009];
    for(int i=0;i<p;i++){
        cin>>a>>b;
        lista[a].push_back(b);
        lista[b].push_back(a);
    }
    //vector<int>canti;
    memset(visit,false,sizeof(visit));
    long long suma=0;
    long long cuad=0;
    for(int i=0;i<n;i++){
        if(!visit[i]){
            int v=dfs(lista,visit,i);
            //canti.push_back(v);
            suma+=v;
            cuad+=(v*v);
        }
    }
    suma=suma*suma;
    long long res=(suma-cuad)/2;
    cout<<res<<"\n";
    return 0;
}
