#include<bits/stdc++.h>
using namespace std;
int main(){
	int h,w;
	double cont = 0.0;
	bool flag = false;
	freopen("ascii.in","r",stdin);
	freopen("ascii.out","w",stdout);
	string s;
	cin>>h>>w;
	for(int i=0; i<h; i++){
		cin>>s;
		for(int j=0; j<w; j++){
			if((s[j] == '/' && !flag) || (s[j] == '\\' && !flag)){
				cont += 0.5;
				flag = true;
			}
			else{
				if(s[j] == '.' && flag){
					cont += 1.0;
				}
				else{
					if((flag && s[j] == '\\') || (flag && s[j] == '/')){
						cont += 0.5;
						flag = false;
					}
				}
			}
		}
	}
	cout<<(int)cont<<"\n";
	return 0;
}

