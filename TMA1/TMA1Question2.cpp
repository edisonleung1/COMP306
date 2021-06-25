//: TMA1Question2.cpp

//  WEIJIANG LIANG,3440511,2019/08/09

/*
 DOCUMENTATION
 
 Program Purpose:
 A program that opens a (text) file, and displays the contents of that file one line at a time. After a line has been displayed, the program should wait for the user to press the <enter> key before displaying the next line in the file.
 
 Compile (assuming Cygwin is running): g++ -o TMA1Question2.cpp
 Execution (assuming Cygwin is running): ./TMA1Question2.cpp
 
 Notes: in Cygwin, main must return type int
 
 Classes: none
 
 Variables:
 file - file name
 s - used for temporary
 */

/*  TEST PLAN
 
 Normal case:whos your daddy
 result: whos your daddy
 
 Normal case:hello world
hello world
hello world
 result: hello world
 hello world
 hello world
 
 Normal case:thanks you so much
 thanks you so much
 result: thanks you so much
 thanks you so much
 
 Abnormal case: ((()))
 sdasdas
 sadasa
 result: ((()))
 sdasdas
 sadasa
 
 Limiting condition:No file found
 result: no return
 
 Discussion: This program can run under limiting condition without cracking.
 
 */

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    string s,file;
    cout << "Please enter file name" << endl;
    cin >> file;
    ifstream in (file);
    while(getline(in,s)){
        cout << s;
        cin.get();
    }
}
