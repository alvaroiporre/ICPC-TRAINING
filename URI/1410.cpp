#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,d;
    while(cin>>a>>d&&a&&d){
        int ataque[a];
        int defensa[d];
        for(int i=0;i<a;i++){
            cin>>ataque[i];
        }
        for(int i=0;i<d;i++){
            cin>>defensa[i];
        }
        sort(ataque,ataque+a);
        sort(defensa,defensa+d);
        if(ataque[0]>=defensa[1])cout<<"N\n";
        else cout<<"Y\n";
    }

    return 0;
}
