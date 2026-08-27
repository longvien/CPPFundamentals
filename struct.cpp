#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3")

struct Person {
    string name;
    int age;
    string work;
};

Person solve() {
    Person p1 = {"Tom", 16, "Student"};
    Person p2;
    p2.name = "Ana";
    p2.age = 18;
    p2.work = "Student";
    cout << "Name: " << p2.name << ", Age: " << p2.age << ", Job: " << p2.work << "\n"; 
    return p1;
}

int main() {
    Person p1 = solve();
    cout << "Name: " << p1.name << ", Age: " << p1.age << ", Job: " << p1.work << "\n"; 
    return 0;
}
