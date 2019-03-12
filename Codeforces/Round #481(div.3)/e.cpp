#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,w,a;
    cin>>n>>w;
    vector<int>xy;
    while(n--){
        cin>>a;
        xy.push_back(a);
    }
    int c=0;
    for(int i=0;i<=w;i++){
        int y=xy[0]+i;

        bool flag=true;
        if(y<=w&&y>=0){
        for(int j=1;j<xy.size();j++){
            if(xy[j]+y<=w&&xy[j]+y>=0){
                y=xy[j]+y;
            }else{
                flag=false;
                break;
            }
        }
        if(flag)c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
