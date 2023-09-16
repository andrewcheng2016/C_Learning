#include <iostream>


int main(){

	//Declare array
    char message [5]  {'H','e','l','l','o'};
    //int data[5] {1,2,3,3,3};

    //std::cout << "data : " << data << std::endl;
    
  
    //Print out the array through looping
    std::cout << "message : ";
    for( auto c : message){
        std::cout << c ; // Hello
    }
    std::cout << std::endl;
    std::cout << "------------------" << std::endl;

    //Change characters in our array
    message[1] = 'a';

    //Print out the array through looping
    std::cout << "message : ";
    for( auto c : message){
        std::cout << c ; // Hallo
    }
    std::cout << std::endl;
    std::cout << "------------------" << std::endl;

   
   
    // Will probably print garbage after your char array    
    std::cout << "message : " << message << std::endl; // Hallooo■²┐J☻
    std::cout << "------------------" << std::endl;
      

 
    //If a character array is null terminated, it's called as C-String    
    char message1 [] {'H','e','l','l','o','\0'};
    std::cout << "message1 : " << message1 << std::endl; // Hello
    std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl; // 6 bytes
    std::cout << "------------------" << std::endl;

  
    // Implicitly null terminated
    char message2 [6] {'H','e','l','l','o'};
    std::cout << "message2 : " << message2 << std::endl; // Hello
    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl; // 6 bytes
    std::cout << "------------------" << std::endl;

    char message3 [] {'H','e','l','l','o'}; // This is not a c string ,
											//as there is not null character (Don't do it)
    std::cout << "message3 : " << message3 << std::endl; // HelloHello 
    std::cout << "sizeof(message3) : " << sizeof(message3) << std::endl; // 5 bytes
    std::cout << "------------------" << std::endl;
    

    

    //String literal (Implicitly null terminated)  
    char message4 [] {"Hello"};
    std::cout << "message4 : " << message4 << std::endl; // Hello
    std::cout << "sizeof(message4) : " << sizeof(message4) << std::endl;   // 6 bytes
    std::cout << "------------------" << std::endl;


    //Can't safely print out arrays other than those of characters
    int numbers [] {1,2,3,4,5};
    std::cout << "numbers :  " << numbers << std::endl;
    std::cout << "------------------" << std::endl;
 

    
    return 0;
}