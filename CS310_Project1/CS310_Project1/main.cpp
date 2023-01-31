/*
 main.cpp
 CS310_Project1
 Created by Anna Nardelli on 1/19/23.
 
 Program creates variables for a user's personal fitness data
 then prints out the values
 */


#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    //user's name and gender
    string name = "Anna Nardelli";
    string gender = "female";
    
    //user's age
    int age = 21;
    
    //user's weight in kg
    double weight = 45.7;
    
    //user's exercise type and time in minutes
    string type = "indoor walking";
    double time = 45.5;
    
    //printing the variables in a nice format
    cout <<name<<" ("<<gender<<", "<<age<<")"<< endl;
    cout <<"Weight: "<<weight<<" kg"<< endl;
    cout <<"Exercise: "<<type<<" ("<<time<<" minutes)"<< endl;
    
    return 0;
}
