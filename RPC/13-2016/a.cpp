#include<bits/stdc++.h>

using namespace std;
#define F(x,a,b) for(int x=a;x<=b;x++)
#define ll long long
char a[1000][1000];
struct p
{
    char num[10][10];
    int nu;
}d[12];
int rec[100];
void _c()
{
    F(i,0,12)F(j,0,9)F(k,0,9)d[i].num[j][k]='.';
    F(i,0,4){d[0].num[0][i]='x';d[0].num[6][i]='x';}F(i,0,6){d[0].num[i][0]='x';d[0].num[i][4]='x';}
    F(i,0,6){d[1].num[i][4]='x';}
    F(i,0,3){d[2].num[i][4]='x';} F(i,3,6){d[2].num[i][0]='x';}F(i,0,4){d[2].num[0][i]='x';d[2].num[3][i]='x';d[2].num[6][i]='x';}
    F(i,0,6)F(j,0,4)d[3].num[i][j]=d[2].num[i][j];F(i,4,5){d[3].num[i][0]='.';d[3].num[i][4]='x';}
    F(i,0,6)F(j,0,4)d[4].num[i][j]=d[1].num[i][j];F(i,0,3)d[4].num[i][0]='x';F(i,0,4)d[4].num[3][i]='x';
    F(i,0,6)F(j,0,4)d[5].num[i][j]=d[2].num[i][j];F(i,1,2){d[5].num[i][0]='x';d[5].num[i][4]='.';}F(i,4,5){d[5].num[i][0]='.';d[5].num[i][4]='x';}
    F(i,0,6)F(j,0,4)d[6].num[i][j]=d[5].num[i][j];F(i,4,5)d[6].num[i][0]='x';
    F(i,0,6)F(j,0,4)d[7].num[i][j]=d[1].num[i][j];F(i,0,6)d[7].num[0][i]='x';
    F(i,0,6)F(j,0,4)d[8].num[i][j]=d[6].num[i][j];F(i,1,2)d[8].num[i][4]='x';
    F(i,0,6)F(j,0,4)d[9].num[i][j]=d[8].num[i][j];F(i,4,5)d[9].num[i][0]='.';
}
int _j(int st,int en)
{
   F(k,0,9)
   {
       int flag=1;
       F(l,0,6)
       {
         F(m,0,4)
         {
             if (d[k].num[l][m]!=a[l][st+m]){flag=0;break;}
         }if (!flag) break;
       }
       if (flag) return k;
   }
   return -1;

}
int main()
{
    _c();
    while (scanf("%s",a[0])!=EOF)
    {
      F(i,1,6)scanf("%s",a[i]);
      int len=strlen(a[0]);// cout<<len<<endl;
      ll ans1=0;ll ans=0;
      for (int i=0;i<len;i+=6){int key=_j(i,i+4);if (key!=-1)ans1=ans1*10+key;else{ans=ans1;ans1=0;continue;}}
      ll t=ans+ans1;int cnt=0;
      if (t==0) {F(i,0,6){F(j,0,4)printf("%c",d[0].num[i][j]);printf("\n");}continue;}
      while (t)
      {
          rec[++cnt]=t%10;
          t/=10;
      }
      char str[1000][1000];
       F(i,0,7)F(j,0,950) str[i][j]='.';
        int stt=0;
        for (int k=cnt;k>=1;k--)
        {
            F(i,0,6)F(j,0,4)
            str[i][j+stt]=d[rec[k]].num[i][j];
            stt+=6;
        }
        F(i,0,6){F(j,0,stt-2)printf("%c",str[i][j]);printf("\n");}
    }

}
