#include <bits/stdc++.h>

using namespace std;

double add(double a , double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    try {
        if (b != 0) {
            return a / b;
        }
        else {
            throw ("Zero Division Error");}
    } catch(string err) {
        cout << err;
    }
    
}
int main() {}