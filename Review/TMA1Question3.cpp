#include<iostream>
using namespace std;
#include<vector>

int main(){
	int i,j;
	vector <float> f,f2,f3;
	for(i=0;i<25;++i){
		f.push_back(i);
		f2.push_back(i*i);
	}
	for (int i = 0; i < 25; ++i){
		f3.push_back(f[i]+f2[i]);
		cout<<"for"<<i<<";"<<f[i]<<"+"<<f2[i]<<"="<<f3[i]<<endl;
	}
}