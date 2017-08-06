class Point {									//点类 
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
double Dot(Point A, Point B) { return A.x*B.x + A.y*B.y; } 				//点积  
double Length(Point A) { return sqrt(Dot(A, A)); }  				//向量长度  
double Angle(Point A, Point B) { return acos(Dot(A, B) / Length(A) / Length(B)); } 	//向量夹角  
double Cross(Point A, Point B) { return A.x*B.y - A.y*B.x; } 			//叉积  
