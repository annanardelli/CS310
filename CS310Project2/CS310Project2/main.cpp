//
//  main.cpp
//  CS310Project2
//
// The program takes user input and prints it out in a nice format
// It also checks to make sure the user is inputting ints and doubles are valid
//  Created by Anna Nardelli on 1/27/23.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    //get user's name and gender
    string name;
    cout << "What is your name? " << endl;
    getline(cin, name);

    string gender;
    cout << "What is your gender? " << endl;
    getline(cin, gender);
    
    //Get user's age
    
    int age;
    cout << "What is your age? " << endl;
    cin >> age;
    
    while(cin.fail()) {
        cout << "The input is not valid!" << endl;
        cout << "What is your age? " << endl;
        //clear the input
        cin.clear();
        //ignores and extracts bad values up to 1000 characters up until enter key
        cin.ignore(1000, '\n');
        cin >> age;
    }
    
    cin.clear();
    cin.ignore(1000, '\n');
    
    //Get user's weight
    double weight;
    cout << "What is your weight in kg? " << endl;
    cin >> weight;
    
    while(cin.fail()) {
        cout << "The input is not valid!" << endl;
        cout << "What is your weight in kg? " << endl;
        //clear the input
        cin.clear();
        //ignores and extracts bad values up to 1000 characters up until enter key
        cin.ignore(1000, '\n');
        cin >> age;
    }
    
    cin.clear();
    cin.ignore(1000, '\n');
    
    //Get user's exercise type
    string type;
    cout << "What type of exercise did you do? " << endl;
    getline(cin, type);
    
    //Get user's exercise time
    double time;
    cout << "How long did you exercise? " << endl;
    cin >> time;
    
    while(cin.fail()) {
        cout << "The input is not valid!" << endl;
        cout << "How long did you exercise? " << endl;
        //clear the input
        cin.clear();
        //ignores and extracts bad values up to 1000 characters up until enter key
        cin.ignore(1000, '\n');
        cin >> age;
    }
    
    //printing the variables in a nice format
    cout <<name<<" ("<<gender<<", "<<age<<")"<< endl;
    cout <<"Weight: "<<weight<<" kg"<< endl;
    cout <<"Exercise: "<<type<<" ("<<time<<" minutes)"<< endl;
    return 0;
}
