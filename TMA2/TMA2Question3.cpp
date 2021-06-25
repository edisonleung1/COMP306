//: TMA2Question3.cpp

//  WEIJIANG LIANG,3440511,2019/08/09

/*
 DOCUMENTATION
 
 Program Purpose:
 Write a program in which you create a Hen class. Inside this class, nest a Nest class. Inside Nest, place an Egg class. Each class should have a display() member function. For each class, create a constructor and a destructor that prints an appropriate message when it is called. In main(), create an instance of each class using new, and call the display() function for each one. After calling display(), free the storage using delete.
 
 Compile (assuming Cygwin is running): g++ -o TMA2Question3.cpp
 Execution (assuming Cygwin is running): ./TMA2Question3
 
 Notes: in Cygwin, main must return type int
 
 Classes: none
 
 Variables:
 a,b,c - used for temporary as new instance of each class 
 */

/*  TEST PLAN
 
 Normal case:1 
 result: 
Hen is created
Nest is created
Egg is created
Hen is displayed
Nest is displayed
Egg is displayed
Hen is destroyed
Nest is destroyed
Egg is destroyed

 
 Discussion: This program can complete task correctly, cause no input file needed, no other case to be tested
 
 */

#include <iostream>
using namespace std;

class Hen{
	public:
		Hen() {
			cout << "Hen is created" << endl;
		}
		~Hen() {
			cout << "Hen is deleted" << endl;
		}
		void display() {
			cout << "Hen is displayed" << endl;
		}
		class Nest {
			public:
				Nest() {
				cout << "Nest is created" << endl;
				}
				~Nest()  {
				cout << "Nest is deleted" << endl;
				}
				void display() {
				cout << "Nest is displayed" << endl;
				}
			class Egg {
				public:
					Egg() {
					cout << "Egg is created" << endl;
					}
					~Egg() {
					cout << "Egg is deleted" << endl;
					}
					void display() {
					cout << "Egg is displayed" << endl;
					}
			};
		};
};
int main() {
	Hen *a = new Hen();
	Hen::Nest *b = new Hen::Nest();
	Hen::Nest::Egg *c = new Hen::Nest::Egg();
	a->display();
	b->display();
	c->display();
	delete a;
	delete b;
}
