#include<iostream>
using namespace std;
#include<fstream>

class Text{
public:
	string line,file;
	Text(){}
	Text(string name){
		ifstream in(name);
		while(getline(in,line)){
			file=file+line+"\n";
		}
	}
	void contents(){
		cout<<file;
	}
};

int main(){
	Text t("file.cpp");
	t.contents();
}
