//: TMA1Question1.cpp

//  WEIJIANG LIANG,3440511,2019/08/09

/*
 DOCUMENTATION
 
 Program Purpose:
 A program that opens a file and counts the whitespace-separated words in that file.
 
 Compile (assuming Cygwin is running): g++ -o TMA1Question1.cpp
 Execution (assuming Cygwin is running): ./TMA1Question1.cpp
 
 Notes: in Cygwin, main must return type int
 
 Classes: none
 
 Variables:
 file - file name
 s - used for temporary
 */

/*  TEST PLAN
 
 Normal case:whos your daddy
 result: 3
 
 Normal case:hello world
 result: 2
 
 Normal case:thanks you so much
 result: 4
 
 Abnormal case: ((()))
 result: 1
 
 Limiting condition:No file found
 result: 0
 
 Discussion: This program can run under limiting condition without cracking.
 
 */

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    int word = 0;
    string s,file;
    cout << "Please enter file name" << endl;
    cin >> file;
    ifstream in (file);
    while (in >> s)
        ++word;
    cout << "whitespace-separated words counted:" << word << endl;
}

