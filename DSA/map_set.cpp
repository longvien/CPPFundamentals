#include <bits/stdc++.h>

using namespace std;

int main() {
    map<string, vector<string>> m;
    m["A"].push_back("B");
    m["A"].push_back("B");
    for (auto [key, value] : m)  {
        for (string i : value) {
            cout << i << " ";
        }
    }
    return 0;
}