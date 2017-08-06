#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
	const double pi=3.1415926536;
	
	double x1,x2,y1,y2,r1,r2;
	cin>>x1>>y1>>r1>>x2>>y2>>r2;
	double d=sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
	if (r1+r2 <= d ){
		cout << "0.000";
		return 0;
	}
	if ( abs(r1-r2)>=d ) {
		double r = min(r1,r2);
		double area = pi*r*r;
		printf("%.3f\n",area);
		return 0;
	}
	double x=(d*d+r1*r1-r2*r2)/2.0/d;
	double y = d-x;
	double a1 = acos(x/r1);
	double a2 = acos(y/r2);
	double area1 = r1*r1*(a1-sin(2*a1)/2.0);
	double area2 = r2*r2*(a2-sin(2*a2)/2.0);
	double area = area1 + area2;
	printf("%.3f\n",area);
	return 0;
}
