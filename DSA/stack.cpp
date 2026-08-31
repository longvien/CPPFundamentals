#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")

signed main() {
    stack<int> s;
    s.push(5);
    s.push(4);
    while (!s.empty()) {
        int curr = s.top();
        s.pop();
        cout << curr << "\n";
    }
    
    return 0;
}