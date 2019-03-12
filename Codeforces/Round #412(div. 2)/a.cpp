
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool c=0, t=0;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);

    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if((a[i]!=b[i])||(i>0&&(a[i-1]==a[i]||b[i-1]==b[i]))){

            if(a[i]!=b[i]){
                c=1;
            }
            else if(i>0&&(a[i-1]==a[i]||b[i-1]==b[i])){
                t=1;
            }
        }
    }
    if(c) cout<<"rated\n";
    else if(t) cout<<"maybe\n";
    else cout<<"unrated\n";
    return 0;
}
