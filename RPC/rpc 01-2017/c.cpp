
#include <bits/stdc++.h>

using namespace std;

struct name {
  string nombre, apellido;
};
bool comp(name a, name b){
    if(a.apellido != b.apellido) return a.apellido < b.apellido;
    return a.nombre < b.nombre;

}
name a[105];

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> a[i].nombre >> a[i].apellido;
  }
  sort(a, a + n, comp);
  for(int i = 0; i < n; i++) {
    cout<<a[i].nombre<<" "<<a[i].apellido<<endl;
  }
  return 0;
}

