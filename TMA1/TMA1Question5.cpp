//: TMA1Question5.cpp

//  WEIJIANG LIANG,3440511,2019/08/09

/*
 DOCUMENTATION
 
 Program Purpose:
 A program that creates an array of 100 string objects. Fill the array by having your program open a (text) file, and read one line of the file into each string until you have filled the array. Display the array using the format “line #: <string>”, where # is the actual line number (you can use the array counter for this value), and <string> is the stored string.
 
 Compile (assuming Cygwin is running): g++ -o TMA1Question5.cpp
 Execution (assuming Cygwin is running): ./TMA1Question5.cpp
 
 Notes: in Cygwin, main must return type int
 
 Classes: none
 
 Variables:
 vector<string> s - used to store line
 string file - file name
 string s2 - temporary use
 */

/*  TEST PLAN
 
 Normal Case: GoodDocs.cpp
 result: program works normaly
 
 Normal Case: Makefile
 result:
 line 1: all:
 line 2:     g++ TMA1Question1.cpp -o TMA1Question1
 line 3: debug:
 line 4:     $(CPP) TMA1Question1.cpp
 
 Normal Case:hahah lalla
 adsa

 result:
 line 1: hahah lalla
 line 2:  adsa
 
 Abnormal Case: empty document
 result:no result
 
 Limiting Case:file not found
 result:no result
 
 Discussion: This program matched the requirement. Run sucessful without cracking.
 
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string s2,file;
    cout << "Please enter file name" << endl;
    cin >> file;
    ifstream in(file);
    string s[100];
    int count = 0;
    for(int i=0;i<100;i++){
        getline(in,s[i]);
        cout << "line " << i << ": " << s[i] << endl;
    };
};
