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



// #include <bits/stdc++.h>           

// using namespace std;

// int main() {
    
//     // First initialize option
    
//     pair<string, int> n;
//     n.first = "A";
//     n.second = 1;
//     cout << n.first << " - " << n.second << endl;
    
//     // Second initialize option
//     pair<double, char> p = {2.5, 'a'};
//     cout << p.first << " " << p.second << endl;
    
//     cout << "Pairs in Vector:" << endl;
//     vector<pair<double, char>> a;
//     a.push_back(p);
//     for (auto [u, v] : a) {
//         cout << u << " " << v;
//     }
//     return 0; 
//     
// }