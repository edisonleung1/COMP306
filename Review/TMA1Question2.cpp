#include<iostream>
using namespace std;
#include<fstream>

int main(){
	string line;
	ifstream in("file.cpp");
	while(getline(in,line)){
		cout<<line<<endl;
		cin.get();
	}
}