// constants - named, occupy storage, usually typed, can't be changed once declared
// Literal Constants  
// Declared Constants
// Constant Expressions - constexpr keyword
// Enumerated Constants  - enum keyword
// Defined Constants - #define

// Literal Constants ex:
/*
 * \n - newline
 * \r - return
 * \t - tab
 * \' - single quote
 * \" - double quoate
 * \\ - backslash*/
 
 // Declard Constants - const keyword 
 
 /*
  * Frank's Carpet Cleaning Service
  * Charges $30 per room
  * Sales Tax Rate is 6%
  * Estimates are valid for 30 days
  * 
  * Prompt the user for the number of rooms they would like cleaned 
  * and provide an estimate such as
  * 
  * Estimate for carpet cleaning service:
  * Number of rooms: 2
  * Price per room: $30
  * Cost: $60
  * Tax: $3.6
  * ======================
  * Total Estimate: $63.60*/
#include <iostream>

using namespace std;

int main()
{
    const double charge_per_room {30};
    //const int total_cost {charge_per_room * number_of_rooms};
    const double sales_tax {.06};
    int number_of_rooms {0};
    cout << "Welcome To The Cleaners." << endl << endl;
    cout << "How Many Rooms Would You Like Cleaned: ";
    cin >> number_of_rooms;
    cout << "\nCleaning Estimate";
    cout << "Rooms: " << number_of_rooms << " cleaned at $" << charge_per_room << endl;
    cout << "Cost: $" << number_of_rooms * charge_per_room << endl;
    cout << "Tax $" << charge_per_room * number_of_rooms * sales_tax << endl;
    cout << "\nYour Total Cost is $" << (charge_per_room * number_of_rooms) + (charge_per_room * number_of_rooms * sales_tax) << endl;
    cout << "Estimate expires in 30 days." << endl;
    return 0;
}