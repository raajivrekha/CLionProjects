#include <iostream>
using namespace std;

int main() {

    bool bValue = true;
    cout << bValue << endl;

    // what happens when we put a number as char type in a variable
    char cValue = 55;
    //outputs 7
    cout << cValue << endl;


    //use single quotes to do the literal
    char cValue2 = '7';
    cout << cValue2 << endl;

    //use single quotes to do the literal
    char cValue3 = 'g';
    cout << cValue3 << endl;
    // size of char
    cout << "Size of char: " << sizeof(char) << endl;


    //what is wchar_t? its for a wider range of characters that you can represent in just char



    //std::cout << "Hello, World!" << std::endl;
    return 0;
}