#include <iostream>
using namespace std;

int main() {
    float a, b;
    char op;
    cout << "Enter expression (e.g., 4 + 5): ";
    cin >> a >> op >> b;

    switch (op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << (b != 0 ? a / b : 0); break;
        default: cout << "❌ Unknown operation";
    }
    cout << endl;
}
