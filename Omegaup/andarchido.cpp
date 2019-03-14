#include <iostream>
#include <vector>
#include <algorithm>
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
struct pac{
    int t;
    int d;
};
bool comp(pac a, pac b){
    if(a.t<=b.t){
        if(a.t==b.t){
            if(a.d>=b.d) return true;
            else return false;
        }else{
            return true;
        }
    }else return false;
}
int main(){
    optimizar_io
    int n,i,d,t;
    cin>>n;
    vector<pac> todos(n);
    for(i=0;i<n;i++){
        cin>>todos[i].t>>todos[i].d;
    }
    sort(todos.begin(),todos.end(), comp);
    int libros=0;
    for(i=0;i<n;i++){
        int tiem=todos[i].t*2;
        int sum=0;
        for(int j=i+1;j<n;j++){
            sum+=todos[j].d;
        }
        libros+=(tiem*sum);
    }
    cout<<libros;
    return 0;
}
