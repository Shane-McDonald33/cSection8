#include <iostream>

using namespace std;

int main()
{
    cout << "Please Enter the Length of the Room: ";
    int length {0};
    cin >> length;
    cout << "Please Enter the Width of the Room: ";
    int width {0};
    cin >> width;
    cout << "The Area of Your Room is " << length * width << "sq ft." << endl;
    return 0;
}
