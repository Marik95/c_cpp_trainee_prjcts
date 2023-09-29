#include <iostream>

using namespace std;

int main(){

    // Braced initializations
    int orange_amount;
    int apple_amount{};
    int cherry_amount{10};
    int watermelon_amount{20};
    int beryries_amount {cherry_amount + watermelon_amount};
    // int narrowing_conversion_braced {2.9}; Compilier error
    
    cout << "Braced initializtions" << endl
         << orange_amount << endl
         << apple_amount << endl
         << cherry_amount << endl
         << watermelon_amount << endl
         << beryries_amount << endl
         << "______________________" << endl;
    
    // Functional initializations
    int cats_amount(11);
    int dogs_amount(12);
    int home_animals_amount (cats_amount + dogs_amount);
    int narrowing_conversion_functional (2.9);
    
    cout << "Functional initializations" << endl
         << cats_amount << endl
         << dogs_amount << endl
         << home_animals_amount << endl
         << narrowing_conversion_functional << endl
         << "______________________" << endl;

    // Assignment initializations
    int bike_amount = 9;
    int truck_amount = 8;
    int vehicle_amount = bike_amount + truck_amount;
    int narrowing_conversion_assignment = 2.9;
    
    cout << "Assignment initializations" << endl
         << bike_amount << endl
         << truck_amount << endl
         << vehicle_amount << endl
         << narrowing_conversion_assignment << endl
         << "______________________" << endl;    

    return 0;
}