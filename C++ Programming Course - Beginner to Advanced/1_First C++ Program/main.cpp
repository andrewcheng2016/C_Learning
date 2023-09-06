// To include a standard library header file,
// which provides input and output functionality, such as std::cout and std::endl.
#include <iostream> 


// To define an immediate function, which is a function that is evaluated at compile time.
consteval int get_value(){
    return 3;
}

// To define a main function, which is the entry point of a C++ program.
int main(){
    constexpr int value = get_value(); // To define a constant expression, which is an expression that is evaluated at compile time.
    std::cout << "value : " << value << std::endl; // To print a value to the standard output stream.
    return 0; // To return a value from a function.
}