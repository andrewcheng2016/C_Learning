#include <iostream>

int main(){

    int scores [] {1,2,5};

   
    int count1 { std::size(scores)}; // std::size( C++17)
    std::cout << "count1 : " << count1 << std::endl;    // 3
    std::cout << "-------------------------" << std::endl;
    
    std::cout << "sizeof(scores) : " << sizeof(scores) << std::endl;    // 12
    std::cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << std::endl; // 4
    int count2 {sizeof(scores)/sizeof(scores[0])}; 
    std::cout << "count2 : " << count2 << std::endl; // 3  
    std::cout << "-------------------------" << std::endl;

    for(size_t i {0} ; i < count2 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    } 
    std::cout << "-------------------------" << std::endl;

   //Range based for loop (Same as the above for loop)
    for ( auto i : scores){
            std::cout << "value  : " << i << std::endl;       
    }
    std::cout << "-------------------------" << std::endl;   
   
    
    return 0;
}