#include <iostream>

int main(){

    // Braced Initialization    
    int elephant_count; // Variable may contain random garbage value. Warning

    int lion_count{}; // Initialized to 0

    int dog_count{10}; // Initializes to 10

    int cat_count{15}; // Initializes to 15

    // Can use expression as initializer
    int domesticated_animals{dog_count + cat_count};

    // int narrowing_conversion{2.9}; // Warning: Some of the compiler will chop off the decimal part or throw an error

    std::cout << "Elephant count: " << elephant_count << std::endl;
    std::cout << "Lions count: " << lion_count << std::endl;
    std::cout << "Dogs count: " << dog_count << std::endl;
    std::cout << "Cats count: " << cat_count << std::endl;

    // Functional Initialization
    int apple_count(5);
    int orange_count(10);
    int fruit_count{apple_count + orange_count};

    int narrowing_conversion_functional(2.9); // Information lost, 2 is stored instead of 2.9.

    std::cout << "Apples count: " << apple_count << std::endl;
    std::cout << "Oranges count: " << orange_count << std::endl;
    std::cout << "Fruits count: " << fruit_count << std::endl;
    std::cout << "Narrowing conversion (Functional Initialization): " << narrowing_conversion_functional << std::endl;

    // Assignment Initialization
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;

    int narrowing_conversion_assignment = 2.9; // Information lost, 2 is stored instead of 2.9.

    std::cout << "Bikes count: " << bike_count << std::endl;
    std::cout << "Trucks count: " << truck_count << std::endl;
    std::cout << "Vehicles count: " << vehicle_count << std::endl;
    std::cout << "Narrowing conversion (Assignment Initialization): " << narrowing_conversion_assignment << std::endl;

    // Check the size with sizeof
    std::cout << "sizeof int: " << sizeof(int) << std::endl; // 4 bytes
    std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl; // 4 bytes

    return 0;
}