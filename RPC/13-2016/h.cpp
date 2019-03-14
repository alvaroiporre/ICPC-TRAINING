#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+7;
const double eps=1e-8;
const double pi=acos(-1);

double dcmp(double x)
{
    if(fabs(x) < eps) return 0;
    else return x < 0 ? -1 : 1;
}

struct Point
{
    double x, y;
    Point(double x=0, double y=0):x(x),y(y) { }
};

typedef Point Vector;

Vector operator + (const Point& A, const Point& B)
{
    return Vector(A.x+B.x, A.y+B.y);
}

Vector operator - (const Point& A, const Point& B)
{
    return Vector(A.x-B.x, A.y-B.y);
}

Vector operator * (const Point& A, double v)
{
    return Vector(A.x*v, A.y*v);
}

Vector operator / (const Point& A, double v)
{
    return Vector(A.x/v, A.y/v);
}

double Cross(const Vector& A, const Vector& B)
{
    return A.x*B.y - A.y*B.x;
}

double Dot(const Vector& A, const Vector& B)
{
    return A.x*B.x + A.y*B.y;
}

double Length(const Vector& A)
{
    return sqrt(Dot(A,A));
}

Vector Rotate(Vector A,double rad)
{
    return Vector(A.x*cos(rad)-A.y*sin(rad),A.x*sin(rad)+A.y*cos(rad));
}

bool operator < (const Point& p1, const Point& p2)
{
    return p1.x < p2.x || (p1.x == p2.x && p1.y < p2.y);
}

bool operator == (const Point& p1, const Point& p2)
{
    return p1.x == p2.x && p1.y == p2.y;
}

Vector Normal(Vector A)
{
    double L=Length(A);
    return Vector(-A.y/L,A.x/L);
}
struct Line
{
    Point P;
    Vector v;
    double ang;
    Line() {}
    Line(Point P, Vector v):P(P),v(v)
    {
        ang = atan2(v.y, v.x);
    }
    bool operator < (const Line& L) const
    {
        return ang < L.ang;
    }
};

bool OnLeft(const Line& L, const Point& p)
{
    return Cross(L.v, p-L.P) > 0;
}


Point GetLineIntersection(const Line& a, const Line& b)
{
    Vector u = a.P-b.P;
    double t = Cross(b.v, u) / Cross(a.v, b.v);
    return a.P+a.v*t;
}

const double INF = 1e8;

Point ansPoly[maxn];
int HalfplaneIntersection(vector<Line> L)
{
    int n = L.size();
    sort(L.begin(), L.end()); //
    int first, last;         //
    vector<Point> p(n);      //
    vector<Line> q(n);       //
    q[first=last=0] = L[0];  //
    for(int i = 1; i < n; i++)
    {
        while(first < last && !OnLeft(L[i], p[last-1])) last--;
        while(first < last && !OnLeft(L[i], p[first])) first++;
        q[++last] = L[i];
        if(fabs(Cross(q[last].v, q[last-1].v)) < eps)   //
        {
            last--;
            if(OnLeft(q[last], L[i].P)) q[last] = L[i];
        }
        if(first < last) p[last-1] = GetLineIntersection(q[last-1], q[last]);
    }
    while(first < last && !OnLeft(q[first], p[last-1])) last--; //
    if(last - first <= 1) return 0; //
    p[last] = GetLineIntersection(q[last], q[first]); //

    int index=0;
    for(int i = first; i <= last; i++) ansPoly[index++]=p[i];
    return index;
}

double PolygonArea(int n,Point *p)
{
    double area=0;
    for(int i=1; i<n-1; i++)
        area+=Cross(p[i]-p[0],p[i+1]-p[0]);
    return area/2;
}
Point p[5];
void CC(Point *p)
{
    for(int i=0; i<maxn; i++)
    {
        p[i].x=0;
        p[i].y=0;
    }
}
int main()
{
    double a1,a2,a3,a4,a5,a6;
    a5=(5.0*5*4)/(5*5*5-1);
    a2=0;
    while(cin>>p[0].x>>p[0].y>>p[1].x>>p[1].y>>p[2].x>>p[2].y>>p[3].x>>p[3].y)
    {
        CC(ansPoly);
        vector<Line>vec;
        vec.push_back(Line(Point(p[0].x,p[0].y),Point(p[1].x-p[0].x,p[1].y-p[0].y)));
        vec.push_back(Line(Point(p[1].x,p[1].y),Point(p[2].x-p[1].x,p[2].y-p[1].y)));
        vec.push_back(Line(Point(p[2].x,p[2].y),Point(p[3].x-p[2].x,p[3].y-p[2].y)));
        vec.push_back(Line(Point(p[3].x,p[3].y),Point(p[0].x-p[3].x,p[0].y-p[3].y)));
        vec.push_back(Line(Point(-0.5,-0.5),Point(-1,0)));
        int sou_num=HalfplaneIntersection(vec);
        a1=PolygonArea(sou_num,ansPoly);
        vec.clear();
        vec.push_back(Line(Point(p[0].x,p[0].y),Point(p[1].x-p[0].x,p[1].y-p[0].y)));
        vec.push_back(Line(Point(p[1].x,p[1].y),Point(p[2].x-p[1].x,p[2].y-p[1].y)));
        vec.push_back(Line(Point(p[2].x,p[2].y),Point(p[3].x-p[2].x,p[3].y-p[2].y)));
        vec.push_back(Line(Point(p[3].x,p[3].y),Point(p[0].x-p[3].x,p[0].y-p[3].y)));
        vec.push_back(Line(Point(-0.5,-0.5),Point(0,1)));
        int west_num=HalfplaneIntersection(vec);
        a4=PolygonArea(west_num,ansPoly);
        CC(ansPoly);
        vec.clear();
        vec.push_back(Line(Point(p[0].x,p[0].y),Point(p[1].x-p[0].x,p[1].y-p[0].y)));
        vec.push_back(Line(Point(p[1].x,p[1].y),Point(p[2].x-p[1].x,p[2].y-p[1].y)));
        vec.push_back(Line(Point(p[2].x,p[2].y),Point(p[3].x-p[2].x,p[3].y-p[2].y)));
        vec.push_back(Line(Point(p[3].x,p[3].y),Point(p[0].x-p[3].x,p[0].y-p[3].y)));
        vec.push_back(Line(Point(-0.5,0.5),Point(1,0)));
        int nor_num=HalfplaneIntersection(vec);
        a6=PolygonArea(nor_num,ansPoly);
        CC(ansPoly);
        vec.clear();
        vec.push_back(Line(Point(p[0].x,p[0].y),Point(p[1].x-p[0].x,p[1].y-p[0].y)));
        vec.push_back(Line(Point(p[1].x,p[1].y),Point(p[2].x-p[1].x,p[2].y-p[1].y)));
        vec.push_back(Line(Point(p[2].x,p[2].y),Point(p[3].x-p[2].x,p[3].y-p[2].y)));
        vec.push_back(Line(Point(p[3].x,p[3].y),Point(p[0].x-p[3].x,p[0].y-p[3].y)));
        vec.push_back(Line(Point(0.5,0.5),Point(0,-1)));
        int east_num=HalfplaneIntersection(vec);
        a3=PolygonArea(east_num,ansPoly);
        long double ans1,ans2,ans3,ans4,ans5,ans6;
        double ans;
        ans1=(5.0*a1)/(5*5*5-1);
        ans2=(5.0*a2)/(5*5*5-1);
        ans3=3*(5.0*a3)/(5*5*5-1);
        ans4=4*(5.0*a4)/(5*5*5-1);
        ans5=5*a5;
        ans6=6*(5.0*a6)/(5*5*5-1);
        ans=ans1+ans2+ans3+ans4+ans5+ans6;
        printf("%.10lf\n",ans);
    }
    return 0;
}
