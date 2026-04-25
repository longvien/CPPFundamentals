#include <bits/stdc++.h>

using namespace std;

int main() {
    // First initialize option
    pair<string, int> n;
    n.first = "A";
    n.second = 1;
    cout << n.first << " - " << n.second << endl;
    // Second initialize option
    pair<double, char> p = {2.5, 'a'};
    cout << p.first << " " << p.second;
    return 0; 
    // Notice: Pair is a cointainer of ONLY 2 elements!
}