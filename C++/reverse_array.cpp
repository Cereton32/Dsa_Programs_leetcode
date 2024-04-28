#include <algorithm> // for std::reverse
#include <iostream>
using namespace std;

int main()
{
    int originalArray[] = { 1, 2, 3, 4, 5 };
    int length
        = sizeof(originalArray) / sizeof(originalArray[0]);

    
    // reverse(originalArray,originalArray + length );

    
    // for (int i = 0; i < length; i++) {
    //     cout << originalArray[i] << " ";
    // }
    cout<<typeid(originalArray).name();

    return 0;
}