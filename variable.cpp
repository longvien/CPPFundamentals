#include <iostream>
//using namespace std; // same as import sth 

int main() {
    // integer
    int x = 5;
    int y = 6;
    
    //float
    float n = 7.5f;
    
    //double
    double d = 9.5;
    
    // char : single character
    char symbol = '+';
    
    // boolean
    bool t = true;
    bool f = false;

    // string: Notice! string is provided from the std namespace!!!
    std::string name = "Tom";
    
    std::cout << "Hello, my Name is " << name << std::endl; // Compliler will std::cout "Hello, my Name is" then std::cout name. This IS NOT string concatenation!
    std::cout << n + d << std::endl;
    return 0;
} 