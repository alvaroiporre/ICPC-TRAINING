#include<bits/stdc++.h>
using namespace std;
struct nodo{
    int maximo;
    void merge(const nodo &a,const nodo &b){ //fincion mas importante
        maximo=max(a.maximo,b.maximo);
    }
    void iniciar(int v){
        maximo=v;
    }
};
int I,J,V,POS;
int p[100005];
nodo T[262144];
void init(int N, int L, int R){
    if(L==R)T[N].iniciar(p[L]);
    else{
        int M=(L+R)/2,A=N*2,B=N*2+1;
        init(A,L,M);
        init(B,M+1,R);
        T[N].merge(T[A],T[B]);
    }
}
void update(int N, int L, int R){
    if(L==R)p[POS]=V,T[N].iniciar(V);
    else{
        int M=(L+R)/2,A=N*2,B=M*2+1;
        if(POS<=M)update(A,L,M);
        else update(B,M+1,R);
        T[N].merge(T[A],T[B]);
    }
}
nodo query(int N,int L,int R){
    if(I<=L&&R<=J)return T[N];
    else{
        int M=(L+R)/2,A=N*2,B=N*2+1;
        if(J<=M)return query(A,L,M);
        else if(I>M)return query(B,M+1,R);
        else{
            nodo ans;
            ans.merge(query(A,L,M),query(B,M+1,R));
            return ans;
        }
    }
}
int calcular_espacio(int n){
    n--;
    int b=0,ans=1;
    while(n>0)b++,n/=2,ans*=2;
    return ans*2;
}
int main(){
    int n,q,opcion;
    cin>>n;
    //cout<<"espacio: "<<calcular_espacio(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    init(1,0,n-1);
    cin>>q;
    for(int j=0;j<q;j++){
        cin>>opcion;
        if(opcion==1){
            cin>>I>>J;
            I--;
            J--;
            cout<<query(1,0,n-1).maximo;
        }else{
            cin>>POS>>V;
            POS--;
            update(1,0,n-1);
        }
    }
    return 0;
}
