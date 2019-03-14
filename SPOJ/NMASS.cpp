#include<bits/stdc++.h>
using namespace std;
stack<int> s;
void sum(int x){
    int y=s.top();
    s.pop();
    s.push(x+y);
}
int main(){
    string cad;
    s.push(0);
    cin>>cad;
    for(int i=0;i<cad.size();i++){
        if(cad[i]=='H'||cad[i]=='C'||cad[i]=='O'||cad[i]==')'){
            int ad;
            if(cad[i]=='H'){
                ad=1;
            }else if(cad[i]=='C'){
                ad=12;
            }else if(cad[i]=='O'){
                ad=16;
            }else {
                ad=s.top();
                s.pop();
            }
            if(cad[i+1]>'1'&&cad[i+1]<='9'){
                ad*=(int)(cad[i+1]-'0');
                i++;
            }
            //cout<<ad<<"---\n";
            sum(ad);
        }else if(cad[i]=='('){
            s.push(0);
        }
    }
    cout<<s.top()<<endl;

    return 0;
}
