#include <bits/stdc++.h>

using namespace std;

int Find(const vector<string>& names, string s){
  for(int i = 0; i < names.size(); i++)
    if(names[i] == s)
      return i;
  return -1;
}

int BFS_Cost(const vector<vector<int> >& Graph){
  vector<char> colors(Graph.size(), 'w');
  vector<int> distances(Graph.size(), Graph.size()+1);
  int cost = 0;
  colors[0] = 'g';
  distances[0] = 0;
  int cur_dist = 0;
  vector<int> frontier;
  frontier.push_back(0);
  int num_seen = 1;
  while(num_seen < Graph.size()){
    vector<int> new_frontier;
    for(int i = 0; i < frontier.size(); i++){
      for(int j = 0; j < Graph.size(); j++){
	if(colors[j] == 'w' && Graph[frontier[i]][j] != -1){
	  colors[j] = 'g';
	  new_frontier.push_back(j);
	  num_seen++;
	}
      }
    }
    if(new_frontier.size() == 0 && num_seen < Graph.size()) // dead end
      return -1;

    for(int i = 0; i < new_frontier.size(); i++){
      int best_cost = -1;
      for(int j = 0; j < frontier.size(); j++){
	int cur_cost = Graph[new_frontier[i]][frontier[j]];
	if(cur_cost != -1 && (best_cost == -1 || cur_cost < best_cost))
	  best_cost = cur_cost;
      }
      cost += best_cost;
    }
    frontier = new_frontier;

  }
  return cost;
}


int main(){
  int n, m;
  cin >> n >> m;
  vector<string> names(n+1);
  names[0] = "English";
  for(int i = 1; i < n+1; i++){
    cin >> names[i];
  }
  vector<vector<int> > Graph(n+1);
  for(int i = 0; i < Graph.size(); i++)
    Graph[i].resize(n+1,-1);
  for(int i = 0; i < m; i++){
    string first, second;
    int cost;
    cin >> first >> second >> cost;
    int first_v = Find(names, first);
    int second_v = Find(names, second);
    Graph[first_v][second_v] = cost;
    Graph[second_v][first_v] = cost;
  }
  int result = BFS_Cost(Graph);
  if(result == -1)
    cout << "Impossible" << endl;
  else
    cout << result << endl;
  return 0;
}

