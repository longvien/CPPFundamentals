#include <bits/stdc++.h>

int main() {
    // forLoop
    for (int i = 0; i < 3; i++) {
        std::cout << i << std::endl;
    }
    
    // whileLoop
    int x = 0;
    while (x < 3) {
        std::cout << x << std::endl;
        x++;
    }
    
    // doWhileLoop
    int n = 4;
    do {
        std::cout << "Hi"<< std::endl;
        n--;
    } while (n != 0);
    
    // forEachLoop
    std::vector<int> arr = {1, 2, 3, 3};
    for (int numbers : arr) {
        std::cout << numbers << std::endl;
    }
    return 0;
}
