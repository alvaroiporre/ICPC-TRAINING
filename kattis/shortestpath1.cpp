#include <bits/stdc++.h>
using namespace std;
#define MAX 10005 //maximo numero de v�rtices
#define Node pair< int , int > //definimos el nodo como un par( first , second ) donde first es el vertice adyacente y second el peso de la arista
#define INF 1<<30 //definimos un valor grande que represente la distancia infinita inicial, basta conque sea superior al maximo valor del peso en alguna de las aristas
//La cola de prioridad de C++ por default es un max-Heap (elemento de mayor valor en el tope)
//por ello es necesario realizar nuestro comparador para que sea un min-Heap
struct cmp {
    bool operator() ( const Node &a , const Node &b ) {
        return a.second > b.second;
    }
};
vector< Node > ady[ MAX ]; //lista de adyacencia
int distancia[ MAX ];      //distancia[ u ] distancia de v�rtice inicial a v�rtice con ID = u
bool visitado[ MAX ];      //para v�rtices visitados
priority_queue< Node , vector<Node> , cmp > Q; //priority queue propia del c++, usamos el comparador definido para que el de menor valor este en el tope
int V;                     //numero de vertices
int previo[ MAX ];         //para la impresion de caminos
//funci�n de inicializaci�n
void init(){
    for( int i = 0 ; i <= V ; ++i ){
        distancia[ i ] = INF;  //inicializamos todas las distancias con valor infinito
        visitado[ i ] = false; //inicializamos todos los v�rtices como no visitados
        previo[ i ] = -1;      //inicializamos el previo del vertice i con -1
    }
}
//Paso de relajacion
void relajacion( int actual , int adyacente , int peso ){
    //Si la distancia del origen al vertice actual + peso de su arista es menor a la distancia del origen al vertice adyacente
    if( distancia[ actual ] + peso < distancia[ adyacente ] ){
        distancia[ adyacente ] = distancia[ actual ] + peso;  //relajamos el vertice actualizando la distancia
        previo[ adyacente ] = actual;                         //a su vez actualizamos el vertice previo
        Q.push( Node( adyacente , distancia[ adyacente ] ) ); //agregamos adyacente a la cola de prioridad
    }
}
void dijkstra( int inicial ){
    init(); //inicializamos nuestros arreglos
    Q.push( Node( inicial , 0 ) ); //Insertamos el v�rtice inicial en la Cola de Prioridad
    distancia[ inicial ] = 0;      //Este paso es importante, inicializamos la distancia del inicial como 0
    int actual , adyacente , peso;
    while( !Q.empty() ){                   //Mientras cola no este vacia
        actual = Q.top().first;            //Obtengo de la cola el nodo con menor peso, en un comienzo ser� el inicial
        Q.pop();                           //Sacamos el elemento de la cola
        if( visitado[ actual ] ) continue; //Si el v�rtice actual ya fue visitado entonces sigo sacando elementos de la cola
        visitado[ actual ] = true;         //Marco como visitado el v�rtice actual
        for( int i = 0 ; i < ady[ actual ].size() ; ++i ){ //reviso sus adyacentes del vertice actual
            adyacente = ady[ actual ][ i ].first;   //id del vertice adyacente
            peso = ady[ actual ][ i ].second;        //peso de la arista que une actual con adyacente ( actual , adyacente )
            if( !visitado[ adyacente ] ){        //si el vertice adyacente no fue visitado
                relajacion( actual , adyacente , peso ); //realizamos el paso de relajacion
            }
        }
    }
}
int main(){
    int E , origen, destino , peso , inicial,q,q1;
    while(scanf("%d %d %d %d" , &V , &E ,&q,&inicial)){
        if(V==0&&E==0&&q==0&&inicial==0)return 0;
        for(int i=0;i<MAX;i++)ady[i].clear();

        while( E-- ){
            scanf("%d %d %d" , &origen , &destino , &peso );
            ady[ origen ].push_back( Node( destino , peso ) ); //consideremos grafo dirigido
            //ady[ destino ].push_back( Node( origen , peso ) ); //grafo no dirigido
        }
        dijkstra( inicial );
        while(q--){
            cin>>q1;
            if(visitado[q1])cout<<distancia[q1]<<"\n";
            else cout<<"Impossible\n";
        }
        cout<<"\n";
    }
    return 0;
}
