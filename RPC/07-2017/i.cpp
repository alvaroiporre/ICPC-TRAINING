
#include <iostream>
using namespace std;

const int MAXC = 50;
const int MAXT = 100;

class edge {
public:
	int w;
	int cap;
	edge *next;

	edge(int vert = -1, int c = 1, edge *nxt = 0) : w(vert), cap(c), next(nxt)
	{
	}

};

edge gr[MAXC + 2*MAXT + 2];

int path[MAXC + 2*MAXT + 2] = {0};
int npath;
int n, 		// # kids
	m,		// # toys
	g;		// # toy types
int sink;
bool likes[MAXC+1][MAXT+1] = {0};	// kid-toy likes
bool inType[MAXT+1] = {false};

void printGraph()
{
	for(int i=0; i<=sink; i++) {
		cout << i << ":";
		for(edge *p = gr[i].next; p != 0; p = p->next)
			cout << " " << p->w << '(' << p->cap << ')';
		cout << endl;
	}
}

bool deleteEdge(int v, int w)
{
	edge *p = gr+v;
	while (p->next != 0 && p->next->w != w)
		p = p->next;
	if (p->next == 0)
		return false;
	if (--(p->next->cap) == 0) {
		edge* tmp = p->next;
		p->next = tmp->next;
		delete tmp;
	}
	return true;
}

void addEdge(int v, int w)
{
	edge *p = gr+v;
	while (p->next != 0 && p->next->w != w)
		p = p->next;
	if (p->next == 0)
		p->next = new edge(w, 1, 0);
	else
		p->next->cap++;
}

void addEdge(int w, int v, int cap)
{
	gr[w].next = new edge(v, cap, gr[w].next);
}

bool printpath = false;

bool findPath(int len, bool visited[])
{
	if (path[len] == sink) {
		npath = len;
		return true;
	}
	int v = path[len];
	for(edge* p = gr[v].next; p != 0; p = p->next) {
		if (!visited[p->w]) {
			visited[p->w] = true;
			path[len+1] = p->w;
			if (findPath(len+1, visited))
				return true;
//			visited[p->w] = false;
		}
	}
	return false;
}

bool findPath()
{
	bool visited[sink+1];
	for(int i=0; i<=sink; i++)
		visited[i] = false;
	return findPath(0, visited);
}

int flow = 0;

int maxflow()
{
	while (findPath()) {
if (printpath) {
for(int i=1; i<npath; i++)
cout << path[i] << ' ';
cout << endl;
}
		flow++;
		for(int i=1; i<npath; i++) {
			int v = path[i];
			int w = path[i+1];
			if (!deleteEdge(v, w))
				cout << "ERROR: vertes " << w << " not on edge list for " << v << endl;
			addEdge(w, v);
		}
	}
	return flow;
}

int main()
{
	cin >> n >> m >> g;
	sink = n+m+g+1;					// sink vertex
	for(int i=1; i<=n; i++) {
		addEdge(0, i, 1);				// edge from source to each child
	}
	for(int i=1; i<=n; i++) {
		int k;
		cin >> k;
		for(int j=0; j<k; j++) {
			int toy;
			cin >> toy;
			addEdge(i, toy+n);
		}
	}
int best = 0;
	for(int i=1; i<=g; i++) {
		int k;
		cin >> k;
		for(int j=0; j<k; j++) {
			int toy;
			cin >> toy;
			addEdge(toy+n, i+n+m, 1);	// edge from toy to toy type
			inType[toy] = true;
		}
		int r;
		cin >> r;
best += r;
		addEdge(i+n+m, sink, r);		// edge from toy type to sink
	}
	for(int j=1; j<=m; j++) {
		if (!inType[j]) {
			addEdge(j+n, sink, 1);		// edge from type-less toys to sink
best++;
		}
	}

//printGraph();

	flow = 0;
	cout << maxflow() << endl;;
//cout << best << endl;
//cout << "final flow graph" << endl;
//printGraph();
    return 0;
}
