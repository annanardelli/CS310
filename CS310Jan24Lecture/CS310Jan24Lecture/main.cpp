//
//  main.cpp
//  CS310Jan24Lecture
//
//  Created by James Nardelli on 1/24/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
/*
number operators
*/
    //you can change a variable's value in print line/anywhere else, doesn't need to be on its own line
    int f = 2;
    cout << (f = 20) << endl;
    
    //can declare multiple values on same line, separate with comma
    int num1 = 2, num2 = 3;
    
    //computation in print line
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    //2/3 becomes 0 because both operands are ints
    cout << "Division: " << num1/num2 << endl;
    //cast one of the numbers to double so that you can get the fractional answer
    double dnum1 = (double)num1;
    cout << "Floating point division: " << dnum1/num2 << endl;
    //can do same thing in print line
    cout << "Same effect as above: " << double(num1)/ num2 << endl;
    cout << "Casting will not change the variable's value: " << num1 << ": " <<  endl;
    
    //mod
    cout << "Remainder: " << num1 % num2 << endl;
    //mod can't be run on a non-int value; both values must be ints
    //cout << "Error expression: " << num1 % 2.0 << endl;
    
    int x = 4;
    int y = 10;
    int a, b, c;
    a = b = c = 2;
    
    cout << "Exercise 1: " << ((3+(4*x))/5)-((10*(y-5)*(a+b+c))/x)+(9*((4/x)+(9+x)/y)) << endl;
    
/*
increment operators, same as decrement operators but -- instead
*/
    
    a++;
    cout << "a expected as 3: " << a << endl;
    
    ++a;
    cout << "a expected as 4: " << a << endl;
    
    //order of the ++ matters; if you ++ after variable, it will be added after expression; if you ++ before it will add 1 before doing the expression computation
    int result = (a++ * 2);
    cout << result << endl;
    cout << "a expected to be 5: " << a << endl;
    result = (++a) * 2;
    cout << "result expected as 12: " << result << endl;
    cout << "a increased as well: " << a << endl;
    
    //can do with other operators as well
    //same as a = a * 2;
    a *= 2;
    cout << "a expected as 12: " << a << endl;
    a *= 2;
    a *= 2 + 1;
    cout << "a multiplied by 3 as 72: " << a << endl;
    
/*
 Casting
 */
    
    double dResult = 3.5;
    //Type 1
    int iResult = int(dResult);
    cout << iResult << endl;
    
    //Type 2
    iResult = static_cast<int>(dResult);
    cout << iResult << endl;
    

    return 0;
}
