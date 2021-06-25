//: TMA2Question1.cpp

//  WEIJIANG LIANG,3440511,2019/08/09

/*
 DOCUMENTATION
 
 Program Purpose:
 Write a program to manage DVD rental in a “video” rental store. Create an abstract data type that represents a DVD in this store. Consider all the data and operations that may be necessary for the DVD type to work well within a rental management system. Include a print() member function that displays all the information about the DVD. Test your data type by creating an array of 10 DVD instances and filling them using information read from a test input file that you create. Display the DVD information.
 
 Compile (assuming Cygwin is running): g++ -o TMA2Question1.cpp
 Execution (assuming Cygwin is running): ./TMA2Question1
 
 Notes: in Cygwin, main must return type int
 
 Classes: none
 
 Variables:
 file - file name
 temp - used for temporary
 i - used for loop
 */

/*  TEST PLAN
 
1 Normal case:
Input:
Avenage
5
190
John
20191231
20200102

2
lol
5
260
David
20191212
20201021

3
lol
5
260
David
20191212
20201021

4
lol
5
260
David
20191212
20201021

5
lol
5
260
David
20191212
20201021

6
lol
5
260
David
20191212
20201021

7
lol
5
260
David
20191212
20201021

8
lol
5
260
David
20191212
20201021

9
lol
5
260
David
20191212
20201021

10
lol
5
260
David
20191212
20201021

result: 
DVD number is 1
DVD name is Avenage
DVD in stock number is 5
DVD length is 190 minute(s)
DVD rented client name is John
DVD was rented on 20191231
DVD was returned on 20200102
DVD number is 2
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 3
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 4
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 5
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 6
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 7
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 8
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 9
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 10
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021

2 Abnormal case:input file is not DVD infomation
Input:
asfasfad
result:
DVD number is asfasfad
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 

3 Abnormal case: input file does not have 10 dvd information
result: 
DVD number is 1
DVD name is Avenage
DVD in stock number is 5
DVD length is 190 minute(s)
DVD rented client name is John
DVD was rented on 20191231
DVD was returned on 20200102
DVD number is 2
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 3
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 4
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 5
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 6
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 7
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 8
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 9
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 

 
4 Abnormal case:input file not exist
result: DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 
DVD number is 
DVD name is 
DVD in stock number is 
DVD length is  minute(s)
DVD rented client name is 
DVD was rented on 
DVD was returned on 

5 Abnormal case:DVD information is not in correct order
Input:
1
20191231
5
20200102
John
Avenage
190

2
dota
10
250
jack
20161212
20201021

3
lol
5
260
David
20191212
20201021

4
lol
5
260
David
20191212
20201021

5
lol
5
260
David
20191212
20201021

6
lol
5
260
David
20191212
20201021

7
lol
5
260
David
20191212
20201021

8
lol
5
260
David
20191212
20201021

9
lol
5
260
David
20191212
20201021

10
lol
5
260
David
20191212
20201021

result:
DVD number is 1
DVD name is 20191231
DVD in stock number is 5
DVD length is 20200102 minute(s)
DVD rented client name is John
DVD was rented on Avenage
DVD was returned on 190
DVD number is 2
DVD name is dota
DVD in stock number is 10
DVD length is 250 minute(s)
DVD rented client name is jack
DVD was rented on 20161212
DVD was returned on 20201021
DVD number is 3
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 4
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 5
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 6
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 7
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 8
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 9
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021
DVD number is 10
DVD name is lol
DVD in stock number is 5
DVD length is 260 minute(s)
DVD rented client name is David
DVD was rented on 20191212
DVD was returned on 20201021

 
 Discussion: This program can complete task correctly with corrected input file
 
 */

#include <iostream> 
#include <fstream>
#include <string>
using namespace std;

int i;
struct DVDclass{
	string number;
	string name;
	string stock;
	string length;
	string client;
	string rentdate;
	string returndate;

};
void print(struct DVDclass DVD[i]){
	for (i=1;i<=10;i++){
	cout << "DVD number is " << DVD[i].number << endl;
	cout << "DVD name is " << DVD[i].name << endl;
	cout << "DVD in stock number is " << DVD[i].stock << endl;
	cout << "DVD length is " << DVD[i].length << " minute(s)" << endl;
	cout << "DVD rented client name is " << DVD[i].client << endl;
	cout << "DVD was rented on " << DVD[i].rentdate << endl;
	cout << "DVD was returned on " << DVD[i].returndate << endl;
	}
};
int main(){
	struct DVDclass DVD[11];
	string filename,temp;
	cout << "Please enter file name" << endl;
   	cin >> filename;
   	ifstream in (filename);
	for (i=1;i<=10;i++){
		getline(in,DVD[i].number);
		getline(in,DVD[i].name);
		getline(in,DVD[i].stock);
		getline(in,DVD[i].length);
		getline(in,DVD[i].client);
		getline(in,DVD[i].rentdate);
		getline(in,DVD[i].returndate);
		getline(in,temp); 
	}
	print(DVD);

}

