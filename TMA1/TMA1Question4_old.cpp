//: TMA1Question4.cpp

//  WEIJIANG LIANG,3440511,2019/08/09

/*
 DOCUMENTATION
 
 Program Purpose:
 A program that uses two nested for loops and the modulus operator (%) to detect and print the prime numbers from 1 to 10,000. Prime numbers are integral numbers that are not evenly divisible by any other numbers except for themselves and one. Display all the primes found.
 
 Compile (assuming Cygwin is running): g++ -o TMA1Question4.cpp
 Execution (assuming Cygwin is running): ./TMA1Question4.cpp
 
 Notes: in Cygwin, main must return type int
 
 Classes: none
 
 Variables:
 int i - the number being tested.
 */

/*  TEST PLAN
 
 No test plan needed, the program calculated the prime numbers as purpose.
 
 Discussion: This program finishs his job.
 
 */

#include <iostream>
using namespace std;


int main() {
    int p;
    for(int i=2;i<=10000;i++){
        p=1;
        for(int j=1;j<=i;j++){
            if(i%j == 0 and j!=1 and i!=j){
                p=0;break;
            }
        }
        if(p==1)
            cout << i << endl;
        
    }
    
}
