#include<bits/stdc++.h>
#define M 32
using namespace std;
long long hex(string x){
    long long p=1,n=0;
    for(int i=x.size()-1;i>=0;i--){
        int num;
        if(x[i]=='a')num=10;
        else if(x[i]=='b')num=11;
        else if(x[i]=='c')num=12;
        else if(x[i]=='d')num=13;
        else if(x[i]=='e')num=14;
        else if(x[i]=='f')num=15;
        else num=x[i]-'0';
        n+=(p*num);
        p*=16;
    }
    return n;
}
long long bin(string x){
    long long p=1,n=0;
    for(int i=x.size()-1;i>=0;i--){
        int num;
        num=x[i]-'0';
        n+=(p*num);
        p*=2;
    }
    return n;
}
long long dec(string x){
    long long p=1,n=0;
    for(int i=x.size()-1;i>=0;i--){
        int num;
        num=x[i]-'0';
        n+=(p*num);
        p*=10;
    }
    return n;
}
void dec2bin(int x) {
    vector<int> v;
    vector<int>::reverse_iterator it;
    while (x != 0) {
        v.push_back(x % 2);
        x = x/2;
    }
    for (it = v.rbegin(); it != v.rend(); ++it)
        printf ("%d", *it);
    printf (" bin\n");
}

int main(){
    int t;
    cin>>t;
    string a,b;
    for(int i=1;i<=t;i++){
        cin>>a>>b;
        int n;
        cout<<"Case "<<i<<":\n";
        if(b=="bin"){
            n=bin(a);
            cout<<n<<" dec\n";
            cout<<setbase(16)<<n<<" hex\n";
        }else if(b=="dec"){
            n=dec(a);
            cout<<setbase(16)<<n<<" hex\n";
            dec2bin(n);
        }else{
            n=hex(a);
            cout<<setbase(10)<<n<<" dec\n";
            dec2bin(n);
        }
        cout<<"\n";

    }

    return 0;
}
