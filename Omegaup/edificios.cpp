#include <iostream>
#include <stdio.h>
using namespace std;
struct Pila{
    int altura;
    int posicion;
};
int edificios[1000005];
Pila pila[1000005];
int tope = -1;
long long int areaMaxima;
long long int n;
void confirma(long long int area ){
    if( area > areaMaxima ){
        areaMaxima = area;
    }
}
int main()
{
    scanf("%d",&n);
    for( int i = 0; i < n; i++ ){
        scanf("%d",&edificios[i]);
    }
    edificios[n] = 0;
    tope++;
    pila[tope].posicion = 0;
    pila[tope].altura = edificios[0];
    for( int i = 1; i <= n; i++ ){
        int altura = edificios[i];
        if( altura >= pila[tope].altura ){
            tope++;
            pila[tope].altura = altura;
            pila[tope].posicion = i;
        }else{
            while( pila[tope].altura >= altura && tope >= 0 ){
                long long int diferencia = i - pila[tope].posicion;
                long long int a = diferencia * pila[tope].altura;
                confirma( a );
                tope--;
            }
            tope++;
             pila[tope].altura = altura;
        }
    }
    printf("%lld",areaMaxima);
    return 0;
}
