
#include <iostream>
using namespace std;

int main(){
    string n;
    cin>>n;
    bool eq=1;
    for(int i=0;i<n.length();i++){
        if(n[i]=='i'){
            eq=0;
        }
    }
    if(eq) cout<<"S"<<endl;
    else cout<<"N"<<endl;
    return 0;

}
