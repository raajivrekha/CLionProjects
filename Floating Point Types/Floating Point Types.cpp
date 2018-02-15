#include <iostream>

// For input / output manipulation
#include <iomanip>

using namespace std;

int main() {

    float fValue = 123.456789;
    cout << fixed << fValue << endl;
    cout << scientific << fValue << endl;

    //size of floats?
    cout << "Size of (in bytes) of floats: " << sizeof(float) << endl;

    //set precisions for cout
    // requires the include for iomanip
    // using setprecision()
    cout << setprecision(20) << fixed << fValue << endl;

    // doubles
    double dValue = 123.456789;
    cout << setprecision(20) << fixed << dValue << endl;

    // even more precision with long doubles
    long double lValue = 123.456789876543210;
    cout << setprecision(20) << fixed << lValue << endl;
    // size of long double
    cout << "Size of (in bytes) of long double: " << sizeof(long double) << endl;



    //std::cout << "Hello, World!" << std::endl;
    return 0;
}