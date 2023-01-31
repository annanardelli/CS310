//
//  main.cpp
//  HelloWorld
//
//  Created by James Nardelli on 1/17/23.
//
#include <iostream>
#include <string>
//use this so you don't have to type std every time you use standard libraries
using namespace std;

//Globals
//Prof recommends only using globals for constants because they can be changed by anything otherwise
const double PI = 3.1415;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    //escape character is the same as Java and to use a backslash in string use 2 backslashes
    cout << "Folder directory: " << "C:\\Projects" << endl;
    
    cout <<"The number of bytes for int type: " << sizeof(int) << endl;
    cout <<"The number of bytes for short int type: " << sizeof(short int) << endl;
    cout <<"The number of bytes for double type: " << sizeof(double) << endl;
    
/*
 Primitive Data Types
 */
    
    //need to declare variable types and must initialize
    //can specify that an int is unsigned so you get more but only positive value capacity, it's signed by default
    unsigned numberOfStudents;
    numberOfStudents = 15;
    cout << numberOfStudents << endl;
    
    //booleans
    //true bool prints out as a 1, false as 0
    bool flag = true;
    cout << flag << endl;
    
    //chars
    //another way to initialize variables is to send it as an attribute to constructor
    char grade = 'A';
    char gradeCS310('B');
    cout <<grade<<" " <<gradeCS310<< endl;
    
    //declaring multiple variables
    int a, b;
    a = b = 2;

/*
 Strings and Constants
 */
    //strings
    //since strings are objects, not primitives they don't need to have a value assignned to them
    string course;
    cout << "Empty string: " << course << endl;
    
    course = "CS310";
    cout << "New content: " << course << endl;
    
    //constants
    const double TWO = 2.22222;
    cout << "TWO value: " << TWO << endl;
    
    return 0;
}
