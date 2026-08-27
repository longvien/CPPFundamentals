#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")

class Hello {
    private:
        string n = "a";
    public:
        void out() {
            cout << "Hello World \n";
            cout << n << "\n";
        }
        
};

int main() {
    Hello h;
    h.out();
    return 0;
}