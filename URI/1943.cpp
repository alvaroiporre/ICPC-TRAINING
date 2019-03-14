
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1)cout<<"Top 1\n";
    else if(n<4)cout<<"Top 3\n";
    else if(n<6)cout<<"Top 5\n";
    else if(n<11)cout<<"Top 10\n";
    else if(n<26)cout<<"Top 25\n";
    else if(n<51)cout<<"Top 50\n";
    else cout<<"Top 100\n";
    return 0;
}
