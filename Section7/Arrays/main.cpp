/*
 * Arrays
 * Arrays are compound data tyoe or data structure
 * like a collection of elements
 * All elements are of the same type
 * Each element can be acccessed directly*/
 
 /*Array Example
  * int test_scores [5] {100, 90,80,70,60};
  * the bracket syntax declares the index size of the array
  * and best practice is to initialize the array
  * if the initialzing isn't completed, the remaining index
  * elements will be initialized to 0;
  * leaving the brackets blank will allow the compiler
  * to determine the array index size */

#include <iostream>

using namespace std;

int main()
{
    char vowels[] {'a','e','i','o','u',};
    cout << "\nThe first vowel is '" << vowels[0] << "'" << endl;
    
    double hi_temps [] {90.1,89.8,77.5,81.6};
    cout << "\nThe first temp is: " << hi_temps[0] << endl;
    hi_temps[0] = 100.7;
    cout << "\nThe first temp is now: " << hi_temps[0] << endl;
    
    int test_scores[5] {};
    cout << "\nEnter test scores 1-5:\n ";
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    return 0;
}