//: TMA2Question2.cpp

//  WEIJIANG LIANG,3440511,2019/08/09

/*
 DOCUMENTATION
 
 Program Purpose:
 Write a program that dynamically creates pieces of storage of the following types using new: int, long, an array of 100 chars, and an array of 100 floats. Print the addresses and values of these using the format: “type @ <address>= <value>”. After you have printed all the addresses and values, free the storage using delete. Fill the char array using copies of the lowercase and uppercase alphabet (a-z, A-Z), and fill the float array using sequential numbers starting with 101.
 
 Compile (assuming Cygwin is running): g++ -o TMA2Question2.cpp
 Execution (assuming Cygwin is running): ./TMA2Question2
 
 Notes: in Cygwin, main must return type int
 
 Classes: none
 
 Variables:
 file - file name
 temp - used for temporary
 i - used for loop
 j - used to count the char no(from a-z and A-Z)
 */

/*  TEST PLAN
 
 Normal case:1 
 result: program compiled successfully and return the address and value of required valuable.
 
 Discussion: This program can complete task correctly, cause no input file needed, no other case to be tested
 
 */

#include <iostream> 
#include <fstream>
using namespace std;

int main(){
	int i,j;
	j=1;
	int *integer = new int; 
    long *long_int = new long; 
    *integer=1;
    *long_int=9999;
    char *char_array = new char[100]; 
   	float *float_array = new float[100];
	for(i=1;i<=100;i++){
      	float_array[i]=i+100;
	}
	for(i=1;i<=26;i++){
		char_array[j++]='a'+(i-1);
	}
	for(i=1;i<=26;i++){
		char_array[j++]='A'+(i-1);
	}
	for(i=1;i<=26;i++){
		char_array[j++]='a'+(i-1);
	}
	for(i=1;i<=22;i++){
		char_array[j++]='A'+(i-1);
	}	
	cout << "int @ " << integer << " = " << *integer << endl;
	cout << "long @ " << long_int << " = " << *long_int << endl; 
	for(i=1;i<=100;i++){
		cout << "Char @" << static_cast<void *> (&char_array[i]) << "=" << char_array[i] << endl;
		cout << "float @" << static_cast<void *> (&float_array[i]) << "=" << float_array[i] << endl;
	}
	delete integer;
	delete long_int;
	delete[] char_array;
	delete[] float_array; 
}

