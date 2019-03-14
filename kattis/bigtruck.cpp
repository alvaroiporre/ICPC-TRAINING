#include<bits/stdc++.h>
#define MAX 3000
#define math 1000
using namespace std;
struct vert {
    int id;
    int ite;
    int ite_n = 0;
    int dis = INT_MAX;
    vector<vert*>child;
    vector<int>test;
};
int comp(vert* a, vert* b) {
    return a->dis < b->dis;
};
vector<vert>sto;
vector<vert*>Q;
int dis[MAX][MAX] = { 0 };
int vst[MAX] = { 0 };
int main(){
    int n, m;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        vert temp;
        temp.id = i;
        scanf("%d", &temp.ite);
        sto.push_back(temp);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++){
        int a, b, d;
        scanf("%d %d %d", &a, &b, &d);
        a--, b--;
        sto[a].child.push_back(&sto[b]);
        sto[b].child.push_back(&sto[a]);
        dis[a][b] = d;
        dis[b][a] = d;
    }
    sto[0].dis = 0;
    Q.push_back(&sto[0]);
    vst[0] = 1;
    sto[0].ite_n = sto[0].ite;
    while (!Q.empty()){
        vert temp = *Q.front();
        Q.erase(Q.begin());
        int siz = temp.child.size();
        int ind_t = temp.id;
        for (int i = 0; i < temp.child.size(); i++){
            int ind_c = temp.child[i]->id;
            if (temp.dis + dis[ind_t][ind_c] < sto[ind_c].dis){
                sto[ind_c].dis = temp.dis + dis[ind_t][ind_c];
                sto[ind_c].ite_n = sto[ind_t].ite_n + sto[ind_c].ite;
            }
            else if (temp.dis + dis[ind_t][ind_c] == sto[ind_c].dis){
                sto[ind_c].ite_n = max(sto[ind_t].ite_n + sto[ind_c].ite, sto[ind_c].ite_n);
            }
            if (!vst[ind_c]){
                Q.push_back(&sto[ind_c]);
                vst[ind_c] = 1;
            }
        }
        sort(Q.begin(), Q.end(), comp);
    }
    if(sto[n - 1].dis != INT_MAX)cout << sto[n - 1].dis << " " << sto[n - 1].ite_n;
    else cout << "impossible";
    return 0;
}
