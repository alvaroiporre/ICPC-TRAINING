#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    vector<int>especies(1001,0);
    int bosque[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>bosque[i][j];
        }
    }
    for(int i=0;i<2*n;i++){
        int a,b;
        cin>>a>>b;
        if(especies[bosque[a-1][b-1]]==0){
            c++;
            especies[bosque[a-1][b-1]]++;
        }
    }
    cout<<c<<endl;
    return 0;
}
