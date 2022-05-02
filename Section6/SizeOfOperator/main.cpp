// sizeof operator determines the size in bytes of a type of variable
// can also be used to determines size of arrays, structures, and objects

/*
 * Examples of sizeof
 * sizeof(int)
 * sizeof(double)
 * sizeof(some_variable)
 * sizeof some_variable
  */
  
/*
 * sizeof gets its information from two c++ #include files
<climits> and <cfloat>, these two #include files contacint 
size and precision info about your code implementation.
 * <climits> provides info on integral types, <cflots> about float types.
Examples:
int_max
int_min
long_min
long_max
flt_min
flt_max */
#include <iostream>
#include <climits> // need this include precoprocessor for sizeofoperator

using namespace std;

int main()
{
    cout << "sizeof operator" << endl;
    cout << "===============" << endl;
    
    cout << "char " << sizeof(char) << " bytes" << endl; // result, 1 bytes
    cout << "int " << sizeof(int) << " bytes" << endl; // 4 bytes
    cout << "unsigned int " << sizeof(unsigned int) << " bytes" << endl; // 4 bytes
    cout << "short " << sizeof(short) << " bytes" << endl; //2 bytes
    cout << "long " << sizeof(long) << " bytes" << endl; // 8 bytes
    cout << "long long " << sizeof(long long) << " bytes" << endl; // 8 bytes
    
    cout << "===============" << endl;
    cout << "double " << sizeof(double) << " bytes" << endl; //8 bytes
    cout << "float " << sizeof(float) << " bytes" << endl; // 4 bytes
    cout << "long double " << sizeof(long double) << " bytes" << endl; // 16 bytes
    
    
    // use values defined in <climits>
    cout << "===============" << endl;
    cout << "Minimum Values" << endl;
    cout << "char " << CHAR_MIN << endl;
    cout << "int " << INT_MIN << endl;
    cout << "short " << SHRT_MIN << endl;
    cout << "long " << LONG_MIN << endl;
    cout << "long long " << LLONG_MIN << endl;
    
    return 0;
}