#include <bits/stdc++.h>

using namespace std;

int add(int a, int b); // declare a function

int change(int& n) { /*Function with Reference | modified directly on original value*/
    n = 100;
    return n;
}

int main() {
    int n = 20;
    cout << add(1, 2) << endl << change(n);
}

int add(int a, int b) {
    return a + b;
}

