#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")

signed main() {
    queue<int> q;
    q.push(5);
    q.push(4);
    q.push(3);
    cout << q.back() << "\n";
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        cout << curr << "\n";
    }
    return 0;
}