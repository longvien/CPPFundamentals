#include <bits/stdc++.h>

// using namespace std; | using namespace so that i won't need to type std everytime anymore

int main() {
    // Comments
    /*Comments*/
    
    std::cout << "Hello World!" << std::endl; // Standard output

    std::cout << "--------------------------------- \n";
    
    std::string name; // stores input value
    std::cout << "Enter your name: \n";
    std::cin >> name; // pass input value to name variable

    std::cout << "Hello " << name << "! \n"; // output input value
    
    int age; // stores input value
    std::cout << "Enter your age! \n";
    std::cin >> age; // pass input value to age variable
    std::cout << "Hello " << name << "!. " << name << " is " << age << " years old."; // output combine name + age.
    
    return 0;
}

 






// #include <bits/stdc++.h>

// int main() {
//     // This is a comment
//     /*This is a multi-line comments*/
//     // std::cout << "Hello World"; 
//     std::string name;
//     std::cout <<"Enter your name"<< std::endl;
//     std::cin >> name;
//     std::cout << std::string("My name is ") + name << std::endl; // or std::cout << "My name is " << name << std:endl;
//     return 0;
// }