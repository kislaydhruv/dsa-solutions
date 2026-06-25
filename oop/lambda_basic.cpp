#include <bits/stdc++.h>
using namespace std;

int main() {
    // Lambda behaves like an anonymous function object
    auto sayHello = []() {
        cout << "Hello, World!" << "\n";
    };

    // Calling the lambda
    sayHello(); // Output: Hello, World!
    return 0;
}

