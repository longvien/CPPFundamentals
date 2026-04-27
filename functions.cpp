#include <bits/stdc++.h>

using namespace std;

int add(int a, int b);

int change(int& n) {
    return n = 20;
} 
int main() {
    int b = 7;
    cout << "5 + 5 = " << add(5, 5) << "    " << "Change Function: " << change(b);
}

int add(int a, int b) {
    return a + b;
}
