int ConvexHull(Point *p,int n){			//将点集转换为凸包 
	sort(p,p+n);
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

double cal_length(int n)  {				//求凸包周长 
    ch[n]=ch[0];
    double len=0.0;  
    for(int i=1;i<=n;i++){  
        len+=Length(ch[i]-ch[i-1]);  
    }  
    return len;  
}

double cal_Area(int n)  {			//求面积						//求凸包周长 
    double area=0.0;  
    for(int i=2;i<n;i++){  
        area+=Cross(point[i]-point[i-1], point[i]-point[0])/2.0;  
    }  
    return area;  
} 


bool dcmp2(const double& a, const double& b) {
    if(dcmp(b-a) == 1) return 1;
    return 0;
}
double angle(Point v) { 			//求斜率 
	double ret = atan2(v.y, v.x); 
	return ret < -Pi/2 ? ret+2*Pi : ret; 
}
double ang[MAXN];
while(scanf("%lf%lf%lf%lf", &a.x, &a.y, &b.x, &b.y) == 4) {	//直线穿过凸包 
	if(N <= 1) printf("GOOD\n");	
	else {
            	Point u = ch[upper_bound(ang, ang+num, angle(b-a), dcmp2)-ang];
            	Point v = ch[upper_bound(ang, ang+num, angle(a-b), dcmp2)-ang];
            	if (dcmp(Cross(b-a, u-a)*Cross(b-a, v-a)) < eps) 
			printf("BAD\n");			//穿过 
            	else 
			printf("GOOD\n");
        }
}




