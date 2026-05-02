#include <bits/stdc++.h>

using namespace std;
int main() {
    vector<int> v;
    for (int i = 0; i < 5; i ++) {
        v.push_back(i);
    }
    for (int num : v) {
        cout << num << " ";
    };

    vector<double> a = {1.5, 2.5, 3.5};
    for (auto num : a) {
        cout << num << " ";
    }

    // auto figured out by compiler
    vector numbers = {1, 3, 5};
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers.at(i) << " ";
    }
    return 0;
}