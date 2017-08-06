#include <iostream>
#include <cstdio> 
#include <cmath>
#include <algorithm> 
#include <vector>

using namespace std;

const double eps=1e-8;
const double Pi = acos(double(-1));
const long MAXN = 1000000+5;

class Point {									//鐐圭被 
public:
	double x, y;
	Point(double x = 0, double y = 0) :x(x), y(y) {}
	Point operator + (Point B) { return Point(x + B.x, y + B.y); }
	Point operator - (Point B) { return Point(x - B.x, y - B.y); }
	Point operator * (Point B) { return Point(x*B.x, y*B.y); }
	Point operator / (Point B) { return Point(x / B.x, y / B.y); }
};

bool myCmp(Point A, Point B) {
	if (A.x != B.x)  return A.x < B.x;
	else return A.y < B.y;
}
int dcmp(double x) {
	if (fabs(x)<eps) return 0;
	else return x<0 ? -1 : 1;
}
bool operator ==(const Point& a, const Point& b) { return dcmp(a.x - b.x) == 0 && dcmp(a.y - b.y) == 0; }
double Dot(Point A, Point B) { return A.x*B.x + A.y*B.y; } 				//鐐圭Н  
double Length(Point A) { return sqrt(Dot(A, A)); }  				//鍚戦噺闀垮害  
double Angle(Point A, Point B) { return acos(Dot(A, B) / Length(A) / Length(B)); } 	//鍚戦噺澶硅  
double Cross(Point A, Point B) { return A.x*B.y - A.y*B.x; } 			//鍙夌Н  

Point point[MAXN],ch[MAXN];

bool dcmp2(const double& a, const double& b) {
    if(dcmp(b-a) == 1) return 1;
    return 0;
}

double angle(Point v) { 
	double ret = atan2(v.y, v.x); 
	return ret < -Pi/2 ? ret+2*Pi : ret; 
}

double ang[MAXN];

int ConvexHull(Point *p,int n){							//将点集转换为凸包 
	sort(p,p+n,myCmp);
	int m=0;  
	for(int i=0;i<n;i++){
	        while(m>1&&Cross(ch[m-1]-ch[m-2],p[i]-ch[m-2])<=0) m--;  
        	ch[m++]=p[i];  
    	}
	int k=m;  
    	for(int i=n-2;i>=0;i--)  {  
	        while(m>k&&Cross(ch[m-1]-ch[m-2],p[i]-ch[m-2])<=0) m--;  
        	ch[m++]=p[i];  
    	}  
    	if(n>1) m--; 
    	return m;  
}

int input(void){
	int N;
	scanf("%d",&N);
	point[0]=Point(0,0); 
    	for(int i=1;i<=N;i++){
        	scanf("%lf%lf",&point[i].x,&point[i].y);  
    	}
	return N;  
}

int main(){
    	int num,N;
	double ans; 
    	N = input(); 
	num=ConvexHull(point,N);
	for(int i = 0; i < num; i++) 
		ang[i] = angle(ch[i+1]-ch[i]);
	Point a, b;
	while(scanf("%lf%lf%lf%lf", &a.x, &a.y, &b.x, &b.y) == 4) {
		if(N <= 1) printf("GOOD\n");	
		else {
            		Point u = ch[upper_bound(ang, ang+num, angle(b-a), dcmp2)-ang];
            		Point v = ch[upper_bound(ang, ang+num, angle(a-b), dcmp2)-ang];
            		if (dcmp(Cross(b-a, u-a)*Cross(b-a, v-a)) < eps) 
			    printf("BAD\n");
            		else 
			    printf("GOOD\n");
        	}
	}
	
    	return 0;  
}  



