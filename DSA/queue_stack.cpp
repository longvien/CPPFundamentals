#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Stack" << endl;
    stack<int> s;
    s.push(10);
    s.push(20);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }


    cout << "\nQueue" << endl;
    queue<int> q;
    q.push(10);
    q.push(20);
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}