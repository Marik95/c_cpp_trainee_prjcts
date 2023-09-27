#include <iostream>

using namespace std;

int main(){
    // Printing Data
    cout << "Hello C++20" << endl;

    cout << "Please type your full name and age" << endl;

    int age;

    string full_name;

    getline(cin, full_name);

    cin >> age;
    
    cout << "Hello " << full_name << " you are " << age << " years old!" << endl;

    return 0;
}