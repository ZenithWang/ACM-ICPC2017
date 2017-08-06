#include <iostream>
#include <cstdio> 
#include <cmath>
#include <algorithm> 

using namespace std;

const double eps=1e-8,Pi=3.1416;
const long MAXN = 100+5;

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

int input(void){
	int N;
	scanf("%d",&N);
    	for(int i=0;i<N;i++){
        	scanf("%lf%lf",&point[i].x,&point[i].y);  
    	}
	return N;  
}

double cal_Area(int n)  {								//求凸包周长 
    point[n]=point[0];
    double area=0.0;  
    for(int i=2;i<n;i++){  
        area+=Cross(point[i]-point[i-1], point[i]-point[0])/2.0;  
    }  
    return area;  
} 


int main(){
    	int num1,num2,N;
	double ans; 
    	N = input(); 
	ans=cal_Area(N);
    	printf("%.0lf\n",fabs(ans));
    	return 0;  
}  



