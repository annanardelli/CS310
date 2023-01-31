//
//  main.cpp
//  CS310Jan26Lecture
//
//  Created by James Nardelli on 1/26/23.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    //initialize b to 2, a to 3 (b+1)
    int a, b;
    a = ((b=2), b+1);
    cout << a << " " << b << endl;
    
/*
 If/Else Conditional Operators
 */
    //if is same as Java
    if (a>b) {
        cout << "Max: " << a << endl;
    }
    else {
        cout << "Max: " << b << endl;
    }
    
    //this does the same thing as the if else block above
    //means if a > b, make result = a; else result = b
    int result = a>b?a:b;
    cout << "Max: " << result << endl;
    
    
/*
 User Input and Input Checking and While Loop
 */
    
    //String input
    string name;
    cout << "What is your name? ";
    //cin operator separates by space character so it'll only take 1 word
    //cin >> name;
    //must import string class to use getline(), this allows it to take the whole line of input
    getline(cin, name);
    cout << "You entered: " << name << endl;
    
    cout << "Input an int value: " << endl;
    double time;
    //cin means its gonna look for an input
    //use extra >> to add another input space
    //use a space or enter key to separate the values
 
    //cin >> a >> time;
    cin >> a;
    
    //input check; cin.fail() returns 1 if failed
    cout<<"The input is failed or not?" << cin.fail() << endl;
    cout << "You entered: " << a << endl;
    //cout << "The time you entered: " << time << endl;
    
    //While is same as Java
    while(cin.fail()) {
        cout << "The input is not valid!" << endl;
        cout << "Enter another int: " << endl;
        //clear the input
        cin.clear();
        //ignores and extracts bad values up to 1000 characters up until enter key
        cin.ignore(1000, '\n');
        cin >> a;
    }
    cout << a << endl;
    //ignores the last new line character still in reader so that it's empty for the string
    cin.ignore();
  
    

    
    return 0;
}
