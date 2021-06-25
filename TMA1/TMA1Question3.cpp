//: TMA1Question3.cpp

//  WEIJIANG LIANG,3440511,2019/08/09

/*
 DOCUMENTATION
 
 Program Purpose:
 A program that creates three vector<float> objects. Fill the first two objects with 25 floating-point numbers using a for loop as follows:
 fill the first vector object with the loop counter value;
 fill the second vector object with the loop counter value squared;
 finally, write a for loop that adds the corresponding elements in the first two vectors, and puts the result in the corresponding element of the third vector.
 
 Compile (assuming Cygwin is running): g++ -o TMA1Question3.cpp
 Execution (assuming Cygwin is running): ./TMA1Question3.cpp
 
 Notes: in Cygwin, main must return type int
 
 Classes: none
 
 Variables:
 vector<float> f,f2,f3 - as requirement
 */

/*  TEST PLAN
 
 No test plan needed, the program created the elements as purpose.
 
 Discussion: This program finishs his job.
 
 */

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    vector <float> f;
    vector <float> f2;
    vector <float> f3;
    for (int i=0;i<25;i++){
        f.push_back(i);
        f2.push_back(pow(i,2));
        f3.push_back(i+i^2);
        cout << "for counter" << i << " element " << f[i] << " + element " << f2[i] << " = element" << f3[i] << endl;
        
    }
    
}
