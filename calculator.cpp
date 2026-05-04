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
            throw (string("Zero Division Error"));
        }
    } 
    catch(string err) {
        cout << err << " ";
    }
    return 0.0;
}

int main() {
    double firstNum = 2.0;
    double secondNum = 3.0;
    string symbol = "+";
    cout << "Pls enter the first number" << endl;
    cin >> firstNum;
    cout << "Pls enter the second number" << endl;
    cin >> secondNum;
    cout << "Pls enter the calulation symbol" << endl;
    cin >> symbol;

    if (symbol == string("+")) { cout << add(firstNum, secondNum); }
    else if (string(symbol) == "-") { cout << subtract(firstNum, secondNum); }  
    else if (string(symbol) == "*") { cout << multiply(firstNum, secondNum); }
    else if (string(symbol) == "/") { cout << divide(firstNum, secondNum); } 
}
