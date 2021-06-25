/* 
 TMA3Question1.cpp

 WEIJIANG LIANG,3440511,2019/08/09

 DOCUMENTATION
 
 Program Purpose:
 Write a program in which you create a const whose value is determined at runtime by reading the time when the program starts (Hint: use the <ctime> standard header). In a separate function, have the program create two arrays of 10 000 doubles. Initialize the first array with sequential integral values starting with 100, and initialize the second array with the same numbers, but in reverse order (i.e., the first array would contain 100, 101, 102… while the second array contains 10099, 10098, 10097…). Loop through both arrays using a single loop, multiply the corresponding array elements from each array together, and display the result. Read the time when the program completes the multiplication, then compute and display the elapsed time. Do not use inline functions in this program.

 Compile (assuming Cygwin is running): g++ -o TMA3Question1.cpp
 Execution (assuming Cygwin is running): ./TMA3Question1
 
 TEST PLAN:
 No input needed, no test plan needed
 
 RESULT:
 ..
 skip..
 ..
 elapsed time: 0.085226s

 Discussion: This program can complete task correctly, cause no input file needed, no other case to be tested
 
 */
#include <iostream>
#include <ctime>
using namespace std;

const clock_t begin_time = clock();

void func(){
	for (int i = 100; i < 10100; i++)
	{
		double* array1 = new double[10000];
		double* array2 = new double[10000];
		//double array1[10000],array2[10000];
		array1[i] = i;
		array2[i] = 10199-i;
		cout <<  array1[i]<< "*" << array2[i] << "=" << array1[i]*array2[i] << endl;
	}
}

int main (){
    func();
	cout << "elapsed time: " << (float)(begin_time)/CLOCKS_PER_SEC << "s"<<endl;
}

