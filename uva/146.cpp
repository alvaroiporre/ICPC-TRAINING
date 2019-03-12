#include<bits/stdc++.h>
using namespace std;
int main(){
    string x;
    while(cin>>x&&x!="#"){
        if(std::next_permutation(x.begin(),x.end()))cout<<x<<"\n";
        else cout<<"No Successor\n";
    }
    return 0;
}
