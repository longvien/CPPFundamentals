#include <bits/stdc++.h>

using namespace std;

int main() {
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl;

    vector<pair<int, int>> v;
    v.push_back(p);
    for (auto [f, s] : v) {
        cout << f << " " << s;
    }
    
    return 0;
}