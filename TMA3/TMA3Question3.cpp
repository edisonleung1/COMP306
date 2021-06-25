/* 
 TMA3Question3.cpp

 WEIJIANG LIANG,3440511,2019/08/09

 DOCUMENTATION
 
 Program Purpose:
 Create a simple class (DoStuff) containing an int, and overload the operator+ as a member function. Also, provide a print() member function that takes an ostream& as an argument and prints to that ostream&. Add a binary operator- and operator+ to the class as member functions. You should be able to use the objects in complex expressions such as a + b – c. Now add the operator++ and operator--, both prefix and postfix versions. Overload the << operator to provide the same functionality as the print() member function. Test the class to show that all requirements work correctly.
 
 Compile (assuming Cygwin is running): g++ -o TMA3Question3.cpp
 Execution (assuming Cygwin is running): ./TMA3Question3
 
 TEST PLAN:
 No input needed, no test plan needed
 
 Discussion: This program can complete task correctly, cause no input file needed, no other case to be tested
 
 */

#include <iostream>
using namespace std;


class DoStuff{
    public:
        int i;
        DoStuff(){
            i=0;
        }
        DoStuff(int i){
            this->i = i;
        }
        DoStuff operator+(DoStuff temp2){
            DoStuff temp; 
            temp.i = i + temp2.i; 
            return temp;
        }
        DoStuff operator-(DoStuff temp2){
            DoStuff temp;
            temp.i = i - temp2.i;
            return temp;
        }
        void print(ostream& os){
            os<<this->i<<"\n";
        }
        DoStuff operator++(){
            i++;
            return *this;
        }
        DoStuff operator--(){
            i--;
            return *this;
        }
        DoStuff operator++(int){
            DoStuff temp = *this;
            ++*this;
            return temp;
        }
        DoStuff operator--(int){
            DoStuff temp = *this;
            --*this;
            return temp;
        }
};
ostream & operator << (ostream &out, const DoStuff &d){
    out << d.i;
    return out;
}
int main(){
    DoStuff a(1),b(2),c(3);
    DoStuff d(a+b-c);
    cout << "normal" << endl;
    cout << "1 + 2 - 3 = " << 1 + 2 -3 << endl << endl;
    cout << "DoStuff" << endl;
    cout << "1 + 2 - 3 = " ;
    d.print(cout);
    cout << endl;
    cout << "d=";
    d.print(cout);
    cout << endl;
    cout << "d++ = ";
    d++.print(cout);
    cout << endl;
    cout << "d=";
    d.print(cout);
    cout << endl;
    cout << "d-- = ";
    d--.print(cout);
    cout << endl;
    cout << "d=";
    d.print(cout);
    cout << endl;
    cout << "++d = ";
    (++d).print(cout);
    cout << endl;
    cout << "d=";
    d.print(cout);
    cout << endl;
    cout << "--d = ";
    (--d).print(cout);
    cout << endl;
    cout << "d=";
    d.print(cout);
    cout << endl;
    return 0;
}