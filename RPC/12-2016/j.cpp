#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, l,c, k;

    cin>>n>>l>>c;
    vector<int> kasos;
    while(n--){
        cin>>k;
        kasos.push_back(k);
    }
        sort(kasos.begin(),kasos.end());
        int t=kasos.size();
        int colm=kasos[t-1];
        c-=colm;
        bool x=1;
        for(int i=t-1;i>=t-l;i--){
            if(kasos[i]>colm){
                x=0;
                break;
            }
        }
        for(int i=t-l-1;i>=0;i--){
            if(kasos[i]>c){
                x=0;
                break;
            }
        }
        if(x)cout<<"S"<<endl;
        else cout<<"N"<<endl;



    return 0;
}
