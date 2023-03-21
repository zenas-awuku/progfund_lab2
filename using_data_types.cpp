#include <iostream>

using namespace std;

int main () {
    int integer;
    int* pointer_to_integer {&integer};
    int& reference_to_integer {integer};
    const int constant_integer = 20;

    integer = 5;

    ++*pointer_to_integer;
    cout << "Output after increamenting integer through the pointer" << endl;
    cout << "Variable: " << integer << endl;
    cout << "Pointer: " << *pointer_to_integer << endl;
    cout << "Reference: " << reference_to_integer << endl << endl;

    ++reference_to_integer;
    cout << "Output after increamenting integer through the reference" << endl;
    cout << "Variable: " << integer << endl;
    cout << "Pointer: " << *pointer_to_integer << endl;
    cout << "Reference: " << reference_to_integer << endl;

    double hex_literal {0xf3f2};
    double octa_literal {0437};
    double char_literal {'a'};

    cout << endl << hex_literal << endl << octa_literal << endl << char_literal << endl;

}