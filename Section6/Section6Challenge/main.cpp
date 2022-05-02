/*
 * Psudocode
 * Cleaning Service
 * $25 per small room
 * $35 per large room
 * Sales tax 6%
 * Estimates valid 30 days
 * 
 * Prompt user to input number of small and large 
 * rooms want cleaned
 * Provide an estimate in the following:
 * 
 * Title \n
 * How many small rooms: 
 * How many large rooms: 
 * x small rooms at 25 per room
 * x large rooms at 35 per room
 * Cost per total rooms and sizes
 * Tax
 * Total Cost
 * Validity statement*/



#include <iostream>

using namespace std;

int main()
{
    const double small_room_price {25};
    const double large_room_price {35};
    const float sales_tax {0.06};
    
    cout << "\nWelcome to The Cleaners Store!\n" << endl;
    cout << "How many small rooms would you like cleaned: ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    cout << endl;
    cout << "How many large rooms would you like cleaned: ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;
    cout << endl;
    cout << "Small Rooms: " << number_of_small_rooms << " ($25 per room)" << endl;
    cout << "Large Rooms: " << number_of_large_rooms << " ($35 per room)" << endl;
    cout << endl;
    cout << "Cost Estimate: $" << (small_room_price * number_of_small_rooms) + (large_room_price * number_of_large_rooms) << endl;
    cout << "Tax: $" << (small_room_price * number_of_small_rooms * sales_tax) + (large_room_price * number_of_large_rooms * sales_tax) << endl;
    cout << "===============" << endl;
    cout << "Total Cost: $" << (small_room_price * number_of_small_rooms * sales_tax) + (large_room_price * number_of_large_rooms * sales_tax) + (small_room_price * number_of_small_rooms) + (large_room_price * number_of_large_rooms) << endl;
    cout << "Cost Estimate Expires In 30 Days." << endl;
    
    return 0;
}