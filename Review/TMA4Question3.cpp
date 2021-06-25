#include<iostream>
using namespace std;
#include<fstream>
#include <string>
#include <vector>
#include <set>

template <class T>
	class set2{
	private:
		vector<T> elems;
	public:
		void insert(T);
		void display();
	};
template <class T>
	void set2<T>::insert(T elem){
		int s=elems.size();
		for(int i=0;i<s;i++){
			if (elem==elems[i])
				return;
		}
		elems.push_back(elem);
	};
template <class T>
	void set2<T>::display(){
		int s=elems.size();
		for(int i=0;i<s;i++){
			cout<<elems[i]<<" ";
		}
		cout << endl;
	};
int main(){
	set<string> standard;
	standard.insert("a");
	standard.insert("b");
	standard.insert("c");
	cout<<"standard:";
	for(set<string>::iterator it=standard.begin();it<=standard.end();++it){
		cout<<*it<<" ";
	}
	cout<<endl;
	set2<string> custom;
	custom.insert("a");
	custom.insert("b");
	custom.insert("c");
	custom.display();
}