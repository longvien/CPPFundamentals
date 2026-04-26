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
    cout << p.first << " " << p.second << endl;
    
    cout << "Pairs in Vector" << endl;
    vector<pair<double, char>> a;
    a.push_back(p);
    for (auto [u, v] : a) {
        cout << u << " " << v;
    }
    return 0; 
    // Notice: Pair is a cointainer of ONLY 2 elements!
}