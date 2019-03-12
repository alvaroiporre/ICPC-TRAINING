
#include<iostream>
#include<iomanip>
using namespace std;
const int maxv=100;
int grafo[maxv][maxv],visitado[maxv],vertices,aristas;
void DFS(int i){
    cout<<"Visitando:"<<i<<endl;
    visitado[i]=1;

    for(int j=0;j<vertices;j++)
       if(!visitado[j]&&grafo[i][j]==1)
            DFS(j);
}
int main(){
	int vorigen,vdestino;
	cout<<"Vertices:";
	cin>>vertices;
	cout<<"Aristas:";
	cin>>aristas;
	cout<<"Origen -> Destino\n";

	for(int i=0;i<aristas;i++){
		cin>>vorigen>>vdestino;
		//No dirigido
		grafo[vorigen][vdestino]=1;
		grafo[vdestino][vorigen]=1;
	}
	//visitado es inicializado en 0
	for(int i=0;i<vertices;i++)
        visitado[i]=0;
	//empezar recorrido desde 3
    DFS(3);
	return 0;
}
