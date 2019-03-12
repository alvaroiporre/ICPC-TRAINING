
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    string enc;
    vector <int> cont;
    cin>>enc;
    int c1=0;
    for(int i=0;i<n;i++){
        if(enc[i]=='B'){
            int c=0,j;
            c1++;
            for(j=i;enc[j]=='B';j++){
                c++;
            }
            cont.push_back(c);
            i=j;
        }
    }
    cout<<c1<<endl;
    for(int i=0;i<c1;i++){
        cout<<cont[i]<<" ";
    }

    return 0;
}
