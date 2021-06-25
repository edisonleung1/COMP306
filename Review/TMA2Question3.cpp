#include<iostream>
using namespace std;
#include<fstream>

class Hen{
public:
	Hen(){
		cout<<"Hen c"<<endl;
	}
	~Hen(){
		cout<<"Hen d"<<endl;
	}
	void display(){
		cout<<"Hen is display"<<endl;
	}
	class Nest{
	public:
		Nest(){
			cout<<"Nest C"<<endl;
		}
		~Nest(){
			cout<<"Nest D"<<endl;
		}
		void display(){
			cout<<"Nest is display"<<endl;
		}
		class Egg{
		public:
			Egg(){
				cout<<"Egg C"<<endl;
			}
			~Egg(){
				cout<<"Egg D"<<endl;
			}
			void display(){
				cout<<"Egg is display"<<endl;
			}
		};
	};
};

int main(){
	Hen *a=new Hen();
	Hen::Nest *b=new Hen::Nest();
	Hen::Nest::Egg *c=new Hen::Nest::Egg();
	a->display();
	b->display();
	c->display();
	delete a;
	delete b;
	delete c;
}