#include <iostream>
using namespace std;

int main() {

    cout << "Enter your name: " << flush;
    string input;
    cin >> input;
    cout << "You Entered: " << input << endl;

    cout << "Enter a number: " << flush;
    int value;
    cin >> value;
    cout << "You Entered: " << value << endl;

    return 1;
}