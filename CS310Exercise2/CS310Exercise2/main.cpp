//
//  main.cpp
//  CS310Exercise2
//
//  Created by James Nardelli on 1/26/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int num;
    cout << "Enter an int value between 100 and 999" << endl;
    cin >> num;
    int num3 = num%10;
    int num1 = num/10;
    int num2 = num1%10;
    num1 = num/100;
    cout << num1 << " " << num2 << " " << num3 << endl;
    
    int total = num1 + num2 + num3;

    string result = total%3 == 0?"Divisible by 3":"Not divisible by 3";
    cout << result << endl;
}
