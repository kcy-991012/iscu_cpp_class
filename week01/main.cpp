#include <iostream>
#include <string>
int main() {
    /* TODO: 다음이 화면에 출력되게 해보세요:

    ================================
                C++ Kiosk
    ================================
    
    Welcome to C++ Cafe!

    */
      std::cout << "=========================\n";
      std::cout << "       c++ Kiosk\n";
      std::cout << "========================\n";
      
      int age;
      std::cout << "age??\n";
      std::cin >> age;

      std::cin.ignore();

      std::string name; 

       std::cout << "Welcom to C++ Cafe!\n";
       std::cout << "Enter your name:";
       std::getline(std::cin,name);     
       std::cout << "Hello" << name << "! You are  " << age << "  a Member!\n";
    return 0;
}
