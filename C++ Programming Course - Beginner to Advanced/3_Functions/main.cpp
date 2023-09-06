#include <iostream>

// A function that adds two numbers and returns the result
int addNumbers(int first_number, int second_number){
    int sum = first_number + second_number;
    return sum;
}


int main(int argc, char **argv){ 
    int firstNumber = 12;
    int secondNumber {9}; // Another way to initialize variables

    int sum = firstNumber + secondNumber;    
    
    std::cout << "The sum of " << firstNumber << " and " << secondNumber <<" is " << sum << std::endl;
    std::cout << "The sum of " << firstNumber << " and " << secondNumber <<" is " << addNumbers(firstNumber, secondNumber) << std::endl;

    return 0;
}