//: TMA2Question3.cpp

//  WEIJIANG LIANG,3440511,2019/08/09

/*
 DOCUMENTATION
 
 Program Purpose:
 Write a program in which you create a Text class that contains a string object to hold the text of a file. Give it two constructors: a default constructor, and a constructor that takes a string argument that is the name of the file to open. When the second constructor is used, open the file and read the contents of the file into the string member object. Add a member function contents() to return the string so that you can display it. In main(), open a file using Text, and display the contents.
 
 Compile (assuming Cygwin is running): g++ -o TMA2Question4.cpp
 Execution (assuming Cygwin is running): ./TMA2Question4
 
 Notes: in Cygwin, main must return type int
 
 Classes: none
 
 */

/*  TEST PLAN
 
 1 Normal case:
 input:input.txt 
 result: display contents of the file correctly

 2 Normal Case:
 input:GoodDocs.cpp
 result: display contents of the file correctly

 3 Normal Case:
 input:makefile
 result:display contents of the file correctly

 4 Abnormal case:input file not exist
 result:no output

 5 Normal Case:
 input:TMA2Question1.cpp
 result:display contents of the file correctly
 
 Discussion: This program can complete task correctly, cause no input file needed, no other case to be tested
 
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string filename,temp;

class Text{
	string file;
	public: 
		Text(){
		};
		Text(string filename){
   			ifstream in (filename);
			while(getline(in,temp))
   			file += temp+"\n";
		}
		string contents(){
			return file;
		}
};

int main(){
	cout << "Please enter file name" << endl;
   	cin >> filename;
	Text text1(filename);
	cout << text1.contents() << endl;
}
