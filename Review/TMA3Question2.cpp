#include<iostream>
using namespace std;
#include<ctime>

const clock_t t=clock();
inline void func(){
	int i;
	double da[10000],da2[10000];
	for(i=1;i<10001;i++){
		da[i]=i+100;
		da2[i]=10099-i;
	}
	for(i=1;i<10001;i++){
		cout<<da[i]*da2[i]<<endl;
	}
}
int main(){
	func();
	cout<<(float)(clock()-t)/CLOCKS_PER_SEC<<endl;
}