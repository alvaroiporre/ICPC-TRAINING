#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<string> names(n);
  for(int i = 0; i < n; i++){
    cin >> names[i];
  }
  string white_off = names[0];
  string black_off = names[1];
  string white_def = names[2];
  string black_def = names[3];
  string black_dynasty = black_off + " " + black_def;
  string white_dynasty = white_off + " " + white_def;
  int best_dynasty_length = 0;
  int black_dynasty_length = 0;
  int white_dynasty_length = 0;
  vector<string> tied_dynasties;
  int cur_pos = 4;
  string results;
  cin >> results;
  for(int i = 0; i < results.size(); i++){
    //  cout << black_off << " " << black_def << " vs " << white_off << " " << white_def << endl;
    if(results[i] == 'B'){
      swap(black_off, black_def);
      names.push_back(white_def);
      white_def = white_off;
      white_off = names[cur_pos];
      white_dynasty = white_def + " " + white_off;
      white_dynasty_length = 0;
      black_dynasty_length++;
      if(black_dynasty_length == best_dynasty_length){
	tied_dynasties.push_back(black_dynasty);
      }
      if(black_dynasty_length > best_dynasty_length){
	best_dynasty_length = black_dynasty_length;
	tied_dynasties.resize(0);
	tied_dynasties.push_back(black_dynasty);
      }
    }
    else{ // white wins
      swap(white_off, white_def);
      names.push_back(black_def);
      black_def = black_off;
      black_off = names[cur_pos];
      black_dynasty = black_def + " " + black_off;
      black_dynasty_length = 0;
      white_dynasty_length++;
      if(white_dynasty_length == best_dynasty_length){
	tied_dynasties.push_back(white_dynasty);
      }
      if(white_dynasty_length > best_dynasty_length){
	best_dynasty_length = white_dynasty_length;
	tied_dynasties.resize(0);
	tied_dynasties.push_back(white_dynasty);
      }
    }
    cur_pos++;
  }
  for(int i = 0; i < tied_dynasties.size(); i++)
    cout << tied_dynasties[i] << endl;
  return 0;
}
