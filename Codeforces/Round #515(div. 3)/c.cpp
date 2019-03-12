#include<bits/stdc++.h>
//no solution
using namespace std;
int main(){
    int n;
    cin>>n;
    list<int>l;
    int rg[200009]={0},lf[200009]={0};

    while(n--){
        char q;
        int id;
        cin>>q>>id;
        if(q=='L'){
            if(l.size()>0)lf[l.front()]=id;
            if(l.size()==1)rg[id]=0;
            l.push_front(id);
        }
        if(q=='R'){
            if(l.size()>0)rg[l.back()]=id;
            if(l.size()==1)lf[id]=0;
            l.push_back(id);
        }
        if(q=='?'){
            int cont=0;
            int idr=l.back();
            int idl=l.front();
            while(idr!=id&&idl!=id&&idl!=0&&idr!=0){
                //cout<<idl<<" -- "<<idr<<"\n";
                cont++;
                idr=rg[idr];
                idl=lf[idl];
            }
            cout<<cont<<endl;
        }

    }


    return 0;
}

