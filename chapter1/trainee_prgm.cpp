#include <iostream>

using namespace std;


// function
int diffFunc(int mainNumb, int smallNumb){
    
    int diff = mainNumb - smallNumb;

    return diff;
}

int main(){
    
    //statements output
    int firstNumber {3};
    int secondNumber {5};
    int sum  = firstNumber + secondNumber;

    cout << "statements output is: " << sum << endl;
    
    // function output
    int diff = diffFunc(secondNumber, firstNumber);

    cout << "function output is: " << diff << endl;
    
    return 0;
}