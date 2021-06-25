#include<iostream>
using namespace std;
#include<fstream>

struct dvdclass{
	string s1,s2,s3,s4,s5,s6,s7;
	void print(){
		cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl<<s6<<endl<<s7<<endl;
	};
};
int main(){
	int i;
	string tmp;
	struct dvdclass dvd[11];
	ifstream in("file.cpp");
	for(i=1;i<11;++i){
		getline(in,dvd[i].s1);
		getline(in,dvd[i].s2);
		getline(in,dvd[i].s3);
		getline(in,dvd[i].s4);
		getline(in,dvd[i].s5);
		getline(in,dvd[i].s6);
		getline(in,dvd[i].s7);
		getline(in,tmp);
	}
	for(i=1;i<11;++i){
		dvd[i].print();
	}
}