#include <bits/stdc++.h>
using namespace std;

// Concept: restrict T to arithmetic types
template <typename T>
concept Numeric = is_arithmetic_v<T>;

// Class implementing bounded type parameter
template <Numeric T>
class NumericBox {
private:
    T num;

public:
    NumericBox(T num) { this->num = num; }

    double square() {
        return (double)num * (double)num;
    }
};

int main() {
    NumericBox<int> intBox(10);
    cout << intBox.square() << "\n";

    NumericBox<double> doubleBox(5.5);
    cout << doubleBox.square() << "\n";

    // Compile-time error (string is not numeric)
    // NumericBox<string> strBox("Hello");

    return 0;
}
