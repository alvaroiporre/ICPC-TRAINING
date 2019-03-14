#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int digi(string x){
    int n=0;
    for(int i=0;i<x.size();i++){
        if(x[i]>='0'&&x[i]<='9'){
            n+=(int)(x[i]-'0');
        }else{
            return 0;
        }
    }
    if(n%3==0)return 1;
    return 0;
}
bool cmp(char x){
    if(x>='0'&&x<='9')return true;
    return false;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin>>s;
    vector<string>cadenas;
    vector<int>numeros;
    int t=s.size();
    int val=0,j;
    for(int i=0;i<t;i++){
        if(cmp(s[i])){
            bool yes=true;
            for(j=1;i+j<t;j++){
                if(!cmp(s[i+j])){
                    yes=false;
                    cadenas.push_back(s.substr(i,j));
                    i+=j;
                    break;
                }
            }
            if(yes){
                cadenas.push_back(s.substr(i,j));
                break;
            }
        }
    }
    for(int k=0;k<cadenas.size();k++){
        cout<<cadenas[k]<<endl;
        /*for(int i=0;i<t;i++){
            for(int j=1;i+j-1<t;j++){
                val+=digi(s.substr(i,j));
            }
        }*/
    }
    cout<<val<<endl;
    return 0;
}
