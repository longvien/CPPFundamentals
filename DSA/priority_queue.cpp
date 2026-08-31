#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")

signed main() {
    // maxHeap, default or can be written as priority_queue<int>;
    priority_queue<int, vector<int>, less<int>> pq;
    pq.push(1);
    pq.push(5);
    while (!pq.empty()) {
        cout << pq.top() << "\n";
        pq.pop();
    }
    // minHeap, non_default, must be fully decleared, here a pq store type pair<int, int> in an vector, sort by smallest first.
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq2;
    pq2.push({3,10});
    pq2.push({1, 20});
    pq2.push({1, 25});
    while (!pq2.empty()) {
        auto [u, v] = pq2.top();
        pq2.pop();
        cout << u << " " << v << "\n"; 
    }
    return 0;
}