#include<iostream>
using namespace std;

int main(){
	int i,j;
	bool p;
	for (i = 2; i < 10001; ++i){
		p=true;
		for(j=2;j<10001;++j){
			if(i%j==0 and i!=j){
				p=false;
			}
		}
		if(p==true){
			cout<<i<<endl;
		}
	}
}