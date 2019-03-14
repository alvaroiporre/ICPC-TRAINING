//Distribucion de Frecuencias
#include <bits/stdc++.h>
using namespace std;

int main(){
    float n,x,k,r;
    int k1,a1;
    vector<float> fre, l,li;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        fre.push_back(x);
    }
    sort(fre.begin(),fre.end());
    r=(fre[n-1]-10);
    k=1.5+3.3*log10(n);
    k1=(int)k;
    a1=r/k1;
    if(a1*k1<r)a1++;
    int l0=fre[0];
    for(int i=0;i<k1;i++){
        l.push_back(l0);
        li.push_back(l0+a1);
        l0+=a1;
    }
    vector<float>fi(k,0);
    int c=0;
    for(int i=0;i<k1;i++){
        for(int j=c;j<n;j++){
            if(fre[j]<li[i]){
                fi[i]++;
                c++;
            }else{
                break;
            }
        }
    }
    for(int i=0;i<k1;i++){
        cout<<l[i]<<" - "<<li[i]<<" | "<<fi[i]<<endl;
    }
}

