
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main(){
    queue<int> a;
    int n;
    cin>>n;
    int control[n];
    for(int i=0;i<n;i++){
        cin>>control[i];
    }
    sort(control,control+n);
    for(int i=0;i<n;i++){
        a.push(control[i]);
    }
    while(!a.empty()){
        cout<<a.front()<<" ";
        a.pop();
    }
    return 0;
}
