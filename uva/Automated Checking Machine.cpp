#include <iostream>

using namespace std;

int main(){
    bool conec[5], a;

    while(cin>>conec[0]>>conec[1]>>conec[2]>>conec[3]>>conec[4]){
        bool control=1;
        for(int i=0;i<5;i++){
            cin>>a;
            if(a==conec[i]) control=0;
        }
        if(control)cout<<"Y";
        else cout<<"N";
        cout<<"\n";
    }
    return 0;
}
