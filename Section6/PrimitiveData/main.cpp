/*
Fundamental data types implemented directly by the C++ language

Character Types
Integer Types -signed and unsigned 
Floating point types 
Boolean Type - '0' is false 

Size and precision is often compiler dependent (#include <climits>) 
 */
 
 /*
Character Types 

Used to rep singled characters, 'A', 'X', '@'
Wider types are used to re wide character sets 

char - exactly one byte, at least 8 bits
char16_t - at least 16 bits
char32_t - at least 32 bits
wchar_t - can rep the largest available characters set  
*/

#include <iostream>

using namespace std;

int main()
{
    /************
     * Character Type
     **************** */
   char middle_initial {'J'};
   cout << "Your middle initial is " << middle_initial << endl;
   
   /***************
    * integer types
    * ************/
    
    unsigned short int exam_score {55}; //same as unsigend short exam_score {55}
    cout << "My exam score was " << exam_score << endl;
    
    int countries_represented {65};
    cout << "There were " << countries_represented << " countries represented in the meeting." << endl;
    
    long people_in_florida {2061000};
    cout << "There are about " << people_in_florida << " people in Florida." << endl;
    
    long people_on_earth {8'000'000'000}; //ticks used for readability, not visible in the code
    cout << "There are about " << people_on_earth << " people on Earth." << endl;
    
    long long distance_to_alpha_centauri {9461000000000};
    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << endl;
    
    /************
     * Floating Point Types
     * ***********/
     
     float car_payment {401.23}; //'float' is for smaller real numbers (in terms of byte size)
     cout << "My car payment is " << car_payment << endl;
     
     double pi {3.14159}; //double can handle larger number (byte size)
     cout << "Pi is " << pi << endl;
     
     long double large_amount {2.7e120};
     cout << large_amount << " That's a big number" << endl;
     
     /**********
      * Boolean Types
      * ********/
      
      bool game_over {false};
      cout << "The value of game_over is " << game_over << endl; //code prints out '0' when value is 'false', and '1' if 'true'
      
      /***********
       * Overflow Example 
       * **********/
       
       short value1 {30000};
       short value2 {1000};
       long product {value1 * value2}; // if 'short' prodcut is used here you will get a narrowing error, won't compute the math
       cout << "The product of " << value1 << "and " << value2 << " is " << product << endl;
      return 0;
}
 