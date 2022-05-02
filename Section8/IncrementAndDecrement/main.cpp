/*
 * Increment operator ++
 * Decrement operator --
 * 
 * Both denote a change by 1
 * Can be used with ints, floats an pointers
 * 
 * Prefix ++num
 * Postfix num++
 * 
 * Don't overuse
 * Don't use twice for the same variable in the same statement*/

#include <iostream>

using namespace std;

int main()
{
    int counter {10};
    int result {0};
    
    // Example 1 - Simple increment
//    cout << "Counter: " << counter << endl;
//    counter = counter + 1;
//    cout << "Counter: " << counter << endl;
//    counter ++;
//    cout << "Counter: " << counter << endl;
    
    // Example 2 - Preincrement
//    counter = 10;
//    result = 0;
//    cout << "Counter: " << counter << endl;
//    result = ++counter; // ensures that the incremented value for counter is also stored into result
//  //result = counter++; this will increment counter but will store the previous value of counter into result before the increment operator action happens  
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;
//    
    // Example 3
    counter = 10;
    result = 0;
    
    cout << "Counter: " << counter << endl;
    result = ++counter + 10;
    //the output of this statement was result: 21 and counter: 11
    //result = counter++ + 10;
    //the output of this was result: 20 and counter: 11 bc of the position of the increment operator
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    return 0;
}