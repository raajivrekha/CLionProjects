#include <iostream>
#include <limits>

using namespace std;

int main() {

    int value = 643346244236426;

    cout << INT_MAX << endl;

    cout << value << endl;


    long int lValue = 352522346613116113;
    cout << lValue << endl;


    short int sValue = 32325235;
    cout << sValue << endl;

    cout << "Size (bytes) of int: " << sizeof(int) << endl;
    cout << "Size (bytes) of short int: " << sizeof(short int) << endl;
    cout << "Size (bytes) of long int: " << sizeof(long int) << endl;


    return 0;
}