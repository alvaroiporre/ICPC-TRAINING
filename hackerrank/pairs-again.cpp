#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,f=0;
    cin>>n;
    for(int i=n-2;i>0;i-=2){
        f+=i;
    }
    cout<<f<<endl;
    return 0;
}

