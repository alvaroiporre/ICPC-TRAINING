#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0); cin.tie(0);

using namespace std;
int main(){
    optimizar_io

    int t,r,c;
    cin>>t;
    while(t--){

        cin>>r>>c;
        int tablero[r][c],i,j,puntos;
        char p;
        cin>>p;
        for(i=0;i<r;i++){
            for(j=1;j<c;j++){
                if(i!=r-1 && j!=c-1)cin>>tablero[i][j];
                else cin>>p;
            }
        }

        tablero[0][0]=tablero[r-1][c-1]=i=j=puntos=0;
        while(i!=r-1&&j!=c-1){
            cout<<i<<" par "<<j<<endl;
            if(i>=r-1){
                j++;

            }else{
                if(j>=c-1){
                    i++;
                }else{
                    if(tablero[i][j+1]>=tablero[i+1][j]){
                        j++;
                    }else{
                        i++;
                    }

                }
            }
        puntos+=tablero[i][j];
        }
        cout<<"Game Board #"<<t+1<<": "<<puntos<<endl;
    }
    return 0;
}
