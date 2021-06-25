
#include<iostream>
using namespace std;
#include<fstream>

int main(){
	int i;
	string line[101];
	ifstream in("file.cpp");
	for(i=0;i<100;i++){
		getline(in,line[i]);
		cout<<"line "<<i<<":"<<line[i]<<endl;
	}
}