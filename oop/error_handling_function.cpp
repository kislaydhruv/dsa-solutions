#include <bits/stdc++.h>
using namespace std;

void divide() {
    // Risky code (division by zero)
    throw runtime_error("Division by zero!");
}

int main() {
    // Try-catch in caller (exception propagates here)
    try {
        divide();
    }
    catch (const exception& e) {
        cout << "Handled exception: " << e.what() << "\n";
    }

    cout << "Program continues...\n";
    return 0;
}