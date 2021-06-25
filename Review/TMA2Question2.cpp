#include<iostream>
using namespace std;
#include<fstream>

int main(){
	int i;
	int *int2=new int;
	long *long2=new long;
	char *ca=new char[100];
	float *fa=new float[100];
	*int2=1;
	*long2=9999;
	for(i=0;i<26;++i){
		ca[i]='a'+i;
	}
	for(i=26;i<53;++i){
		ca[i]='A'+i;
	}
	for(i=53;i<80;++i){
		ca[i]='a'+i;
	}
	for(i=80;i<101;++i){
		ca[i]='a'+i;
	}
	for(i=1;i<101;++i){
		fa[i]=i+100;
	}
	cout<<"int @"<<int2<<"="<<*int2<<endl;
	cout<<"long @"<<long2<<"="<<*long2<<endl;
	for(i=1;i<101;++i){
		cout<<"char @"<<static_cast<void*> (&ca[i])<<"="<<ca[i]<<endl;
		cout<<"float @"<<static_cast<void*> (&fa[i])<<"="<<fa[i]<<endl;
	}
	delete int2;
	delete long2;
	delete[] ca;
	delete[] fa;
}