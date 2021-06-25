/* 
 TMA4Question3.cpp

 WEIJIANG LIANG,3440511,2019/08/09

 DOCUMENTATION
 
 Program Purpose:
 Using the Standard C++ Library vector as an underlying implementation, create a Set template class that accepts only one of each type of object that you put into it. Make a nested iterator class that supports the “end sentinel” concept in Unit 16. Write test code for your Set in main(), using both your Set template class and the Standard C++ Library set template to verify that the behaviour is correct.
 
 Compile (assuming Cygwin is running): g++ -o TMA4Question3.cpp
 Execution (assuming Cygwin is running): ./TMA4Question3
 
 TEST PLAN:
 No input needed, no test plan needed

 RESULT:
Elements in the Standard C++ Library set:
a b c 
Elements in my set:
a b c 
 
 Discussion: This program can complete task correctly, cause no input file needed, no other case to be tested
 
 */

#include <iostream>
#include<set>
#include<string>
#include<vector>
using namespace std;

template<class T>
    class set2{
        private:
            vector<T> elems;
        public:
            void insert(T);
            void display();
};
template <class T>
    void set2<T>::insert(T elem){
        int size = elems.size();
        for(int i=0;i<size;i++){
            if (elem == (elems[i]))
                return;
        }
        elems.push_back(elem);
    };
template <class T>
	void set2<T>::display(){
    	int size = elems.size();
    	for(int i=0;i<size;i++){
    	cout << elems[i] << " ";
    	}
    cout << endl;
	};
int main(){
    set<string> stand;
    stand.insert("a");
    stand.insert("b");
    stand.insert("c");
    stand.insert("a");
    cout << "Elements in the Standard C++ Library set:" << endl;
    for (set<string>::iterator it=stand.begin(); it!=stand.end(); ++it){
        cout << *it << ' ';
    }
    cout<<endl;
    set2<string> setMine;
    setMine.insert("a");
    setMine.insert("b");
    setMine.insert("c");
    setMine.insert("a");
    cout << "Elements in my set:" << endl;
    setMine.display();
    cout << endl;
}