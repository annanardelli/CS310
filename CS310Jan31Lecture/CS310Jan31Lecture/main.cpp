//
//  main.cpp
//  CS310Jan31Lecture
//
//  Created by James Nardelli on 1/31/23.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
/*
 manipulators and cmath
 */
    //cmath
    double pi = acos(-1);
    cout << "sine pi/2: " << sin(pi/2) << endl;
    cout << "cosine function: " << cos(pi/2) << endl;
    //2^3
    cout << pow(2, 3) << endl;
    //e^1
    cout << exp(1) << endl;
    cout << log(1) << endl;
    
    //manipulators
    double largenumber = pi * 100000000;
    cout << largenumber << endl;
    cout << "Nonscientific Notation: " << fixed << largenumber << endl;
    
    //showpoint makes a whole number show decimal place
    double a = 2;
    cout << a << endl;
    cout << showpoint;
    cout << "Show with decimal point: " << a << endl;
    
    //setprecision() to specify how many sig figs to show
    cout << setprecision(2);
    cout << a << endl;
    
    //since setprecision(2), only 2 sig figs of this number will be printed
    cout << .01234 << endl;
    
    //now it will print 7 sig figs
    cout << setprecision(7);
    cout << .01234 << endl;
    
    //fixed makes it so that setprecision() sets number of decimal places instead of sig figs
    cout << fixed;
    cout << setprecision(2);
    cout << .01234 << endl;
    
    cout << "Two Decimal Places: " << largenumber << endl;
    
    //setw() sets width of the spaces used to display the value, if you setw(5) it will include a leading space to use 5 places " 2.35"
    a = 2.3456;
    cout << "Round: " << a << endl;
    cout << setw(5);
    cout << a << endl;
    //left makes the space from setw(5) go on the other side "2.35 "
    cout << left;
    cout << a << "|" << endl;
    
    return 0;
}
