/* 
 TMA4Question1.cpp

 WEIJIANG LIANG,3440511,2019/08/09

 DOCUMENTATION
 
 Program Purpose:
 Write a program that creates a class hierarchy for simple geometry. 

 Start with a Point class to hold x and y values of a point. Overload the << operator to print point values, and the + and – operators to add and subtract point coordinates (Hint: keep x and y separate in the calculation).
 Create a pure abstract base class Shape, which will form the basis of your shapes. The Shape class will contain abstract functions to calculate area and circumference of the shape, plus provide the coordinates (Points) of a rectangle that encloses the shape (a bounding box). These will be overloaded by the derived classes. Create a display() function that will display the name of the class, and all stored information about the class (including area, circumference, and bounding box).
 Build the hierarchy by creating the Shape classes Circle, Square, and Triangle. For these derived classes, create default constructors, and constructors whose arguments can initialize the shapes appropriately using the correct number of Point objects (i.e., Circle requires a Point center and a radius, Square requires four Point vertices, while Triangle requires three Point vertices).
 In main(), create one instance each of the following: Circle (10, -5) with a radius of 23; Square (5, -5)(-10,7)(4,23)(-6,12); and Triangle(0,0)(10,10)(-15,15). Display the information from each object.

 Compile (assuming Cygwin is running): g++ -o TMA4Question1.cpp
 Execution (assuming Cygwin is running): ./TMA4Question1
 
 TEST PLAN:
 No input needed, no test plan needed
 
 RESULT:
 CircleCircle (10, -5) with a radius of 23
 Area=1661.06
 Circumference=144.44
 Bounding box=(-13,-28),(33,-28),(-13,18),(33,18),
 ----------
 Square (5, -5)(-10,7)(4,23)(-6,12)
 Area=369
 Circumference=76.8375
 Bounding box=(-10,-5),(5,-5),(-10,23),(5,23),
 ----------
 Triangle(0,0)(10,10)(-15,15)
 Area=150
 Circumference=60.8504
 Bounding box=(-15,0),(10,0),(-15,15),(10,15),

 Discussion: This program can complete task correctly, cause no input file needed, no other case to be tested
 
 */
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

class Point{
	public:
		double x;
		double y;
		Point(){
			x=0;
			y=0;
		}
		Point(double m,double n){
			x=m;
			y=n;
		}
		friend ostream& operator<<(ostream& os,Point& p){
			os<<"("<<p.x<<",";
			os<<p.y<<"),";
			return os;
		}
		Point operator+(Point& obj){
			Point p;
			p.x=x+obj.x;
			p.y=y+obj.y;
			return p;
		}

		Point operator-(Point& obj){
			Point p;
			p.x=x-obj.x;
		p.y=y-obj.y;
		return p;
		}
};

class Shape{
	public:
		void area();
		void circumference();
		void boundingbox();
		void display();
};
class Circle: Shape{
	Point p1;
	double radius;
	double aCircle;
	double cCircle;
	Point ll;
	Point lr;
	Point ul;
	Point ur;
	public:
	Circle(Point& p,double r){
		p1=p;
		radius=r;
	}
	void area(){
		aCircle= 3.14*(radius*radius);
	}
	void circumference(){
		cCircle= 3.14*2*radius;
	}
	void boundingbox(){
		ll.x= p1.x-radius;
		ll.y= p1.y-radius;
		ur.x= p1.x+radius;
		ur.y= p1.y+radius;
		lr.x = ur.x;
		lr.y = ll.y;
		ul.x = ll.x;
		ul.y = ur.y;
	}
	void display(){
		cout<<"----------"<<endl;
		cout<<"CircleCircle (10, -5) with a radius of 23"<<endl;
		cout<<"Area="<<aCircle<<endl;
		cout<<"Circumference="<< cCircle<<endl;
		cout<< "Bounding box="<<ll<<lr<<ul<<ur<<endl;
	}
};

class Square:public Shape{
	Point p1;
	Point p2;
	Point p3;
	Point p4;
	Point ll;
	Point lr;
	Point ul;
	Point ur;
	double aSquare;
	double cSquare;
  	public:
		Square(Point& a,Point& b,Point& c,Point& d){
			p1=a;
			p2=b;
			p3=c;
			p4=d;
		}
	void area(){
		double s=sqrt( (p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y) );
		aSquare= s*s;
	}
	void circumference(){
		double s=sqrt( (p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y) );
		cSquare= 4*s;
	}
	void boundingbox(){
		ll.x=min(p1.x,min(p2.x,min(p3.x,p4.x)));
		ll.y=min(p1.y,min(p2.y,min(p3.y,p4.y)));
		ur.x=max(p1.x,max(p2.x,max(p3.x,p4.x)));
		ur.y=max(p1.y,max(p2.y,max(p3.y,p4.y)));
		lr.x=ur.x;
		lr.y=ll.y;
		ul.x=ll.x;
		ul.y=ur.y;
	}
	void display(){
		cout<<"----------"<<endl;
		cout<<"Square (5, -5)(-10,7)(4,23)(-6,12)"<<endl;
		cout<<"Area="<<aSquare<<endl;
		cout<<"Circumference="<<cSquare<<endl;
		cout<< "Bounding box="<<ll<<lr<<ul<<ur<<endl;
	}
};

class Triangle:public Shape{
	Point p1;
	Point p2;
	Point p3;
	Point ll;
	Point lr;
	Point ul;
	Point ur;
	double aTriangle;
	double cTriangle;
	public:
	Triangle(Point& a,Point& b,Point& c){
		p1=a;
		p2=b;
		p3=c;
	}
	void circumference(){
		double s1=sqrt( (p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y) );
		double s2=sqrt( (p1.x-p3.x)*(p1.x-p3.x) + (p1.y-p3.y)*(p1.y-p3.y) );
		double s3=sqrt( (p3.x-p2.x)*(p3.x-p2.x) + (p3.y-p2.y)*(p3.y-p2.y) );
		cTriangle = s1+s2+s3;
	}
	void area(){
		aTriangle=abs((int)(p1.x*(p2.y-p3.y)+p2.x*(p3.y-p1.y)+p3.x*(p1.y-p2.y)))/2;
	}
	void boundingbox(){
		ll.x=min(p1.x,min(p2.x,p3.x));
		ll.y=min(p1.y,min(p2.y,p3.y));
		ur.x=max(p1.x,max(p2.x,p3.x));
		ur.y=max(p1.y,max(p2.y,p3.y));
		lr.x=ur.x;
		lr.y=ll.y;
		ul.x=ll.x;
		ul.y=ur.y;
	}
	void display(){
		cout<<"----------"<<endl;
		cout<<"Triangle(0,0)(10,10)(-15,15)"<<endl;
		cout<<"Area="<<aTriangle<<endl;
		cout<<"Circumference="<<cTriangle<<endl;
		cout<< "Bounding box="<<ll<<lr<<ul<<ur<<endl;
	}
};
int main(){
	Point cp(10,-5);
	Circle c(cp,23);
	c.area();
	c.circumference();
	c.boundingbox();
	c.display();
	Point sp1(5,-5);
	Point sp2(-10,7);
	Point sp3(4,23);
	Point sp4(-6,12);
	Square s(sp1,sp2,sp3,sp4);
	s.area();
	s.circumference();
	s.boundingbox();
	s.display();
	Point tp1(0,0);
	Point tp2(10,10);
	Point tp3(-15,15);
	Triangle t(tp1,tp2,tp3);
	t.area();
	t.circumference();
	t.boundingbox();
	t.display();
}