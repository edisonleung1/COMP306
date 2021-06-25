#include<iostream>
using namespace std;
#include<fstream>

int main(){
	int count=0;
	string temp;
	ifstream in("makefile");
	while(in>>temp){
		count=count+1;
	}
	cout<<count<<endl;
}
