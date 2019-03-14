#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    int k;
    optimizar_io
    while(cin>>k&&k>0){
        double x[k],y[k];
        double d=10001,dis;
        cin>>x[0]>>y[0];
        for(int i=1;i<k;i++){
            cin>>x[i]>>y[i];
            dis=hypot((x[0]-x[i]),(y[0]-y[i]));
            if(dis<d) d=dis;
        }

        for(int i=1;i<k-1;i++){
            for(int j=i+1;j<k;j++){
                dis=hypot((x[i]-x[j]),(y[i]-y[j]));
                if(dis<d) d=dis;
            }
        }
        if(d<10000.0) cout<<fixed<<setprecision(4)<<d<<endl;
        else cout<<"INFINITY"<<endl;
    }
    return 0;
}


/*//more eficient
#include<iostream>
#include<cmath>
using namespace std;
typedef long double lag;
typedef pair<lag,lag> Point;
lag Dist(const Point& a, const Point& b){
	lag x = a.first-b.first, y = a.second-b.second;
	return x*x + y*y;
}
int main(){
	cout.precision(4);
	cout << fixed;
	unsigned n;
	lag dist;
	Point x[10005];
	while(cin >> n,n){
		dist = 100000001.0;
		for(unsigned i=0;i<n;i++)
			cin >> x[i].first >> x[i].second;
		for(unsigned i=0;i<n;i++){
			for(unsigned j=i+1;j<n;j++){
				dist = min(dist,Dist(x[i],x[j]));
			}
		}
		if(dist==100000001.0) cout << "INFINITY" << endl;
		else cout << sqrt(dist) << endl;
	}
}*/
