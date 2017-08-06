#include <iostream>
#include <cstdio> 
#include <cmath>
#include <algorithm> 

using namespace std;

const double eps=1e-8,Pi=3.1416;
const long MAXN = 100000+5;

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

double cal(int n)  {								//求凸包周长 
    ch[n]=ch[0];
    double len=0.0;  
    for(int i=1;i<=n;i++){  
        len+=Length(ch[i]-ch[i-1]);  
    }  
    return len;  
} 

int main(){
    	int num,N;
	double ans; 
    	N = input(); 
	num=ConvexHull(point,N);
    	ans=cal(num);  
    	printf("%0.1lf\n",ans);
    	return 0;  
}  



