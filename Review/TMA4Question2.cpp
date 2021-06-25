#include <iostream>
using namespace std;

class rodent{
public:
	void tail(){};
	void pet(){};
};
class mouse:public rodent{
	void tail(){
		cout<<"yes"<<endl;
	}
	void pet(){
		cout<<"no"<<endl;
	}
};

int main(){
	mouse m1,m2,m3,m4;
	rodent* rodents[]={&m1,&m2,&m3,&m4};
	for(int i=0;i<4;i++){
		rodents[i]->tail();
		rodents[i]->pet();
	}
}