#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")

signed main() {
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(5);
    while (!dq.empty()) {
        cout << dq.front() << "\n";
        dq.pop_front();
        cout << dq.back() << "\n";
        dq.pop_back();
    }
    return 0;
}