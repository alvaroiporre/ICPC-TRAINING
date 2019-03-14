#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>nota;
    string notas[]={"DO","DO#","RE","RE#","MI","FA","FA#","SOL","SOL#","LA","LA#","SI"};
    nota.insert({"DO",0});
    nota.insert({"DO#",1});
    nota.insert({"RE",2});
    nota.insert({"RE#",3});
    nota.insert({"MI",4});
    nota.insert({"FA",5});
    nota.insert({"FA#",6});
    nota.insert({"SOL",7});
    nota.insert({"SOL#",8});
    nota.insert({"LA",9});
    nota.insert({"LA#",10});
    nota.insert({"SI",11});

    int a;
    string b;
    cin>>a>>b;
    int c=nota[b];
    c-=a;
    c=(c>-1?c:c+12);
    cout<<notas[c]<<endl;

    return 0;
}
