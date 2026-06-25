#include <bits/stdc++.h>
using namespace std;

// Custom Exception class
class CustomException : public exception {
public:
    const char* what() const noexcept override {
        return "This is a custom exception!";
    }
};

int main() {
    // try-catch ladder
    try {
        // throwing custom made exception
        throw CustomException();
    }
    catch (const CustomException& e) {
        cout << "Caught: " << e.what() << "\n";
    }

    cout << "Program continues...\n";
    return 0;
}