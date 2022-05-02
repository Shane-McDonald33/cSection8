/* Expressions
 * Expressions are the basic building blocks of a program
 * "a sequence of operators and operands that specifies a computation
 * Computes a value from a number of operands
 * Examples:
 * 34 - which is a literal
 * favorite_number - which is a variable
 * 1 + 2 - addition
 * a > b - relational
 * a + b - assignment
 * 
 * Statements
 * A complete line of code that performs an action
 * Terminated with a semicolon
 * Contains expressions
 * Examples:
 * int x; - declaration
 * favorite_number = 12; - assignment
 * x = 2 * 5; - assignment
 * if (a > b) cout << "x"; - if statement
 * 
 * Operators
 * Examples:
 * * - multiply, + - addition, / - division, - - subtraction, % - modulo (remainder of division, only works with ints)
 * incremenet and decrement
 * relational
 * logical - booleans
 */

#include <iostream>

using namespace std;

int main()
{
//    int num1 {10}; // this is initialization, not assighment
//    int num2 {20}; // this is initialization, not assighment
//    
//    num1 = num2 = 1000; // assignment, overrides the initialization. Double assignment, chains the value to both variables
//     
//    
//    cout << "num1 is: " << num1 << endl;
//    cout << "num2 is: " << num2 << endl;
      int num1 {200};
      int num2 {100};
      
    // cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
    
    int result {0};
    
    result = num1 + num2;
    cout << num1 << "+" << num2 << "=" << result << endl;
    
    result = num1 - num2;
    cout << num1 << "-" << num2 << "=" << result << endl;
    
    result = num1 * num2;
    cout << num1 << "*" << num2 << "=" << result << endl;
    
    result = num1 / num2;
    cout << num1 << "/" << num2 << "=" << result << endl;
    
    result = num2 / num1;
    cout << num1 << "/" << num2 << "=" << result << endl; // prints out zero becasue the division operator only works with integers
    
    result = num1 % num2;
    cout << num1 << "%" << num2 << "=" << result << endl; // prints out '0' bc modulo only cares about the remainder
    
    num1 = 10;
    num2 = 3;
    result = num1 % num2;
    cout << num1 << "%" << num2 << "=" << result << endl;
    
    result = num1 * 10 + num2;
    
    cout << 5/10 << endl; // will return '0' because they're integers
    
    cout << 5.0/10.0 << endl; // will return 0.5 bc these are doubles
      
    
    return 0;
}