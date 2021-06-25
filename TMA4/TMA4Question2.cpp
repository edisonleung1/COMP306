/* 
 TMA4Question2.cpp

 WEIJIANG LIANG,3440511,2019/08/09

 DOCUMENTATION
 
 Program Purpose:
 Create an inheritance hierarchy of Rodent: Mouse, Gerbil, Hamster, etc. In the base class, provide methods that are common to all Rodents, and refine these in the derived classes to perform different behaviours depending on the specific type of Rodent. Rodent must be created as a pure abstract base class. Create an array of pointers (10) to Rodent, and fill it with different specific types of Rodents. Call your base class methods, and display the results.

 Compile (assuming Cygwin is running): g++ -o TMA4Question2.cpp
 Execution (assuming Cygwin is running): ./TMA4Question2
 
 TEST PLAN:
 No input needed, no test plan needed

 RESULT:
 ----------
Type:mouse
Leg:4
Tail:true
Pet:false
----------
Type:gerbil
Leg:4
Tail:true
Pet:true
----------
Type:hamster
Leg:4
Tail:false
Pet:true
----------
Type:mouse
Leg:4
Tail:true
Pet:false
----------
Type:gerbil
Leg:4
Tail:true
Pet:true
----------
Type:hamster
Leg:4
Tail:false
Pet:true
----------
Type:mouse
Leg:4
Tail:true
Pet:false
----------
Type:gerbil
Leg:4
Tail:true
Pet:true
----------
Type:hamster
Leg:4
Tail:false
Pet:true
----------
Type:mouse
Leg:4
Tail:true
Pet:false

 Discussion: This program can complete task correctly, cause no input file needed, no other case to be tested
 */
#include <iostream>
#include <string>
using namespace std;

class Rodent{
	public:
		int leg;
		bool pet, tail;
		virtual void type(){};
		virtual void legcount(){};
		virtual void ispet(){};
		virtual void hastail(){};
};
class Mouse: public Rodent{
	public:
		void type(){
			cout<<"----------"<<endl;
			cout<<"Type:mouse"<<endl;
		}
		void legcount(){
			leg=4;
			cout<<"Leg:"<<leg<<endl;
		}
		void hastail(){
			tail=true;
			cout<<"Tail:"<<boolalpha<<tail<<endl;
		}
		void ispet(){
			pet = false;
			cout<<"Pet:"<<boolalpha<<pet<<endl;
		}
};
class Gerbil: public Rodent{
	public:
		void type(){
			cout<<"----------"<<endl;
			cout<<"Type:gerbil"<<endl;
		}
		void legcount(){
			leg=4;
			cout<<"Leg:"<<leg<<endl;
		}
		void hastail(){
			tail=true;
			cout<<"Tail:"<<boolalpha<<tail<<endl;
		}
		void ispet(){
			pet = true;
			cout<<"Pet:"<<boolalpha<<pet<<endl;
		}
};
class Hamster: public Rodent{
	public:
		void type(){
			cout<<"----------"<<endl;
			cout<<"Type:hamster"<<endl;
		}
		void legcount(){
			leg=4;
			cout<<"Leg:"<<leg<<endl;
		}
		void hastail(){
			tail=false;
			cout<<"Tail:"<<boolalpha<<tail<<endl;
		}
		void ispet(){
			pet = true;
			cout<<"Pet:"<<boolalpha<<pet<<endl;
		}
};
int main (){
	Mouse m1,m2,m3,m4;
	Gerbil g1,g2,g3;
	Hamster h1,h2,h3;
  	Rodent * rodents[] = {&m1,&g1,&h1,&m2,&g2,&h2,&m3,&g3,&h3,&m4};
	for (int i = 0; i < 10; i++){
		rodents[i]->type();
		rodents[i]->legcount();
		rodents[i]->hastail();
		rodents[i]->ispet();
	}
  
}