//
//  main.cpp
//  CS310Jan31Activity
//
//  Created by James Nardelli on 1/31/23.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    cout << left;
    cout << setw(10) << "Degrees";
    cout << setw(10) << "Radians";
    cout << setw(10) << "Sine";
    cout << setw(10) << "Cosine";
    cout << setw(10) << "Tangent" << endl;
    
    double a = 30;
    double arad = 0.5236;
    double b = 60;
    double brad = 1.0472;
    cout << setw(10) << a;
    cout << fixed;
    cout << setprecision(4);
    cout << setw(10) << 0.5236 << setw(10) << sin(arad) << setw(10) << cos(arad) << setw(10) << tan(arad) << endl;
    cout << setprecision(0);
    cout << setw(10) << b;
    cout << setprecision(4);
    cout << setw(10) << 1.0472 << setw(10) << sin(brad) << setw(10) << cos(brad) << setw(10) << tan(brad) << endl;
    
    
    return 0;
}
