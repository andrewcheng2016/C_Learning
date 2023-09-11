#include <iostream>


int main(){

	short int var1 {10}; // 2 bytes
	short int var2 {20};
	
	char var3 {40}; //1 bytes
	char var4 {50};
	
	std::cout << "size of var1 : " << sizeof(var1) << std::endl; // 2 bytes
	std::cout << "size of var2 : " << sizeof(var2) << std::endl; // 2 bytes
	std::cout << "size of var3 : " << sizeof(var3) << std::endl; // 1 bytes
	std::cout << "size of var4 : " << sizeof(var4) << std::endl; // 1 bytes
	
	short int result1 = var1 + var2 ;
	auto result2 = var3 + var4;
	
	std::cout << "size of result1 : " << sizeof(result1) << std::endl; // 2 bytes
	std::cout << "size of result2 : " << sizeof(result2) << std::endl; // 4 bytes
	
   
    return 0;
}