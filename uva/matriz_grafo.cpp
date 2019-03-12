#include<iostream>
#include<iomanip>
using namespace std;
const int maxv=100;
int main(){
	int grafo[maxv][maxv],vertices,aristas;
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
	//mostrar la matriz de adyacencia
	cout<<setw(10);
	for(int i=0;i<vertices;i++)
		cout<<i<<setw(5);
	cout<<endl;
	for(int i=0;i<vertices;i++){
		cout<<i<<setw(5);
		for(int j=0;j<vertices;j++){
			cout<<grafo[i][j]<<setw(5);
		}
		cout<<endl;
	}
	return 0;
}
