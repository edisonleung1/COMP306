#include <iostream>
using namespace std;

class point{
public:
	double x,y;
	point(){
		x=0;
		y=0;
	}
	point(double x2, double y2){
		x=x2;
		y=y2;
	}
	point operator+(point& p2){
		point p;
		p.x=x+p2.x;
		p.y=y+p2.y;
		return p;
	}
	point operator-(point& p2){
		point p;
		p.x=x-p2.x;
		p.y=y-p2.y;
		return p;		
	}
	friend ostream& operator<<(ostream& os, point& p){
		return os<<"("<<p.x<<","<<p.y<<")"<<endl;
	}
};

class shape{
	void area();
	void circumferene();
	void boundingbox();
	void display();
};
class circle:shape{
public:
	double r,a,c;
	point p,bb1,bb2,bb3,bb4;
	circle(point& p2, double r2){
		p=p2;
		r=r2;
	}
	void area(){
		a=3.14*r*r;
	}
	void circumferene(){
		c=2*3.14*r;
	}
	void boundingbox(){
		bb1.x=p.x-r;
		bb1.y=p.y+r;
		bb2.x=p.x+r;
		bb2.y=p.y+r;
		bb3.x=p.x-r;
		bb3.y=p.y-r;
		bb4.x=p.x+r;
		bb4.y=p.y-r;
	}
	void display(){
		cout<<a<<endl;
		cout<<c<<endl;
		cout<<bb1<<bb2<<bb3<<bb4<<endl;
	}
};
class square:shape{
public:
	point sp,sp2,sp3,sp4;
	square(point& spi,point& spi2,point& spi3,point& spi4){
		sp=spi;sp2=spi2;sp3=spi3;sp4=spi4;
	}
};
int main(){
	point cp(10,-5);
	circle c(cp,23);
	c.area();
	c.circumferene();
	c.boundingbox();
	c.display();
	point sp(5,-5),sp2(-10,7),sp3(4,23),sp4(-6,12);
	square s(sp,sp2,sp3,sp4);
}
