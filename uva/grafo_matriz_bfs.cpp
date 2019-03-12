
#include<iostream>
#include<cstdlib>

using namespace std;
#define INICIAL 1
#define ESPERA 2
#define VISITADO 3

const int MAX=100;
int vertices,aristas;
int grafo[MAX][MAX];
int estado[MAX];
int queue[MAX], frente = -1,atras = -1;
void insertar_cola(int vertice);
int eliminar_cola();
int cola_vacia();

void BFS(int v){
    insertar_cola(v);
    estado[v] = ESPERA;
    while(!cola_vacia()){
        v = eliminar_cola();
        cout<<v<<" ";

        estado[v] = VISITADO;
        for(int i=0; i<vertices; i++){
            if(grafo[v][i] == 1&&estado[i] == INICIAL){
                insertar_cola(i);
                estado[i] = ESPERA;
            }
        }
    }
}
void BFS_recorrido(){
	int vinicio;
    for(int v=0; v<aristas; v++)
        estado[v] = INICIAL;
    cout<<"Vertice inicial para el recorrido: ";
    cin>>vinicio;
    BFS(vinicio);
}
void insertar_cola(int vertice){
    if(atras == MAX-1)
		cout<<"Cola sobrepoblada\n";
    else{
        if(frente == -1)
            frente = 0;
        atras = atras+1;
        queue[atras] = vertice ;
    }
}
int cola_vacia(){
    if(frente == -1 || frente > atras)
        return 1;
    else
        return 0;
}
int eliminar_cola(){
    int item_borrar;
    if(frente == -1 || frente > atras){
        cout<<"Cola Vacia";
        exit(1);
    }
    item_borrar = queue[frente];
    frente = frente+1;
    return item_borrar;
}

int main(){
	int vorigen,vdestino;
    cout<<"Vertices:";
	cin>>vertices;
	cout<<"Aristas:";
	cin>>aristas;
	cout<<"Origen -> Destino\n";
    for(int i=0; i<aristas; i++){
        cin>>vorigen>>vdestino;
		grafo[vorigen][vdestino]=1;
    }

    BFS_recorrido();
    return 0;
}
