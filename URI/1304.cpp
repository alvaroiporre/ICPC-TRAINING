#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,m,s;
    int tiempo=0,vel;
    double dist=0;
    while(scanf("%d:%d:%d",&h,&m,&s)!=EOF){
        char c;
        scanf("%c",&c);
        if(c==' '){
            if(tiempo!=0)dist+=(double)(((h*3600+m*60+s)-tiempo)*vel)/3600.0;
            scanf("%d%*c",&vel);
            tiempo=h*3600+m*60+s;
        }else{
            dist+=(double)(((h*3600 + m*60 + s)-tiempo)*vel)/3600;
            printf("%02d:%02d:%02d %.2lf km\n", h, m, s, dist);
            tiempo = h*3600 + m*60 + s;
        }
    }


    return 0;
}
