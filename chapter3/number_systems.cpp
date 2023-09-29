#include <iostream>

using namespace std;

int main(){

    int num1 = 15; // Decimal
    int num2 = 017; // Octal
    int num3 = 0x0F; // Hexadecimal
    int num4 = 0b00001111; //Binary

    cout << num1 << endl
         << num2 << endl
         << num3 << endl
         << num4 << endl;

    return 0;
}