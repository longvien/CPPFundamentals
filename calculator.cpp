#include <bits/stdc++.h>
using namespace std;

double add(double a, double b) {return a + b;}
double subtract(double a, double b) {return a - b;}
double multiply(double a, double b) {return a * b;}
double divide(double a, double b) {return a / b;}


int main() {
    double a;
    double b;
    char m;
    bool v = true;
    cout << "Enter the first number \n";
    cin >> a;
    cout << "Enter the second number \n";
    cin >> b;
    cout << "Enter the calculation method, add(a), subtract(s), multiply(m), divide(d)\n";
    cin >> m;
    double total = 0;
    if (m == 'a') {
        total = add(a, b);
    }
    else if (m == 's') {
        total = subtract(a, b);
    }
    else if (m == 'm') {
        total = multiply(a, b);
    }
    else {
        if (b == 0.0) {
            cout << "Zero Division Error";
            v = false;
        }
        else { total = divide(a, b); }
    }

    if (v) { cout << total; }
    return 0;
}
