#include <iostream>
#include <string> // To use std::string



int main(int argc, char **argv){
    // std::cout: Printing stuff to the console
    std::cout << "Hello World!" << std::endl;


    // Error
    std::cerr << "std::cerr output: Something went wrong." << std::endl;

    // Log message
    std::clog << "std::clog output: This is a log message." << std::endl;

    int age;
    std::string name;

    // std::cout << "Please type in your Last Name: " << std::endl;

    // // Input
    // std::cin >> name;

    // std::cout << "Please type in your age: " << std::endl;
    // std::cin >> age;

    // std::cout << "Hello " << name << "! You are " << age << " years old." << std::endl;

    // // Chaining std::cin
    // std::cout << "Please type in your Last Name and age, separated by spaces: " << std::endl;
    // std::cin >> name >> age;
    // std::cout << "Hello " << name << "! You are " << age << " years old." << std::endl;

    // Reading data with spaces
    std::string full_name;
    std::cout << "Please type in your full name and age: " << std::endl;
    std::getline(std::cin, full_name);
    std::cin >> age;
    std::cout << "Hello " << full_name << "! You are " << age << " years old." << std::endl;

    return 0;
}