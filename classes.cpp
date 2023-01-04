
// typedef example

#include <iostream>

using namespace std;

typedef char C;
typedef char* pChar;

// New method
using C2 = char;
using arrChar50 = char[50];

int main() {
    C myChar = 'h';
    arrChar50 alphabetSoup = {'A', 'B', 'C'};

    cout << "My favorite character is " << myChar << "!" << endl;

    cout << "There are " << sizeof(alphabetSoup) / sizeof(alphabetSoup[0]);
    cout << endl;
}