#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(char x){
    if(x>='0'&&x<='9')return true;
    return false;
}

long long digi(string x){
    long long n=0;
    int t=x.size();
    vector<long long>est(3);
    est[0]=1;
    est[1]=0;
    est[2]=0;
    long long val=0;
    for(int i=0;i<t;i++){
        val =(val+(int)(x[i]-'0'))%3;
		n += est[val];
		est[val]++;
    }
   return n;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin>>s;
    vector<string>cadenas;
    vector<int>numeros;
    int t=s.size();
    long long val=0,j;
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
        //cout<<cadenas[k]<<endl;
        val+=digi(cadenas[k]);
    }
    cout<<val<<endl;
    return 0;
}
