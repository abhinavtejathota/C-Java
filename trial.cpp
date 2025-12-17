#include <iostream> //header file library
#include <string>
//using namespace std; names for objects and variables

int main() { 
    std::cout << "Hellow, World!" << std::endl; //cout - object
    std::cout << "First C++ Program" << std::endl; 

    auto a = 'C';
    std::cout << "Character: " << a << std::endl;
    int x;
    int y;
    std::cin >> x;
    std::cin >> y;
    std::cout << "The sum: " << x+y << std::endl;
    //Revised till strings.

    return 0; //ends main function
}