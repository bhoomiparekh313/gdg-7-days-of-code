#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers (a < b): ";
    cin >> a >> b;

    if (a >= b) {
        cout << "Invalid input! Ensure that a < b." << endl;
        return 1;
    }

    for (int i = a; i <= b; ++i) {
        if (i % 5 == 0 && i % 7 == 0) {
            cout << "FooBar" << endl;
        } else if (i % 5 == 0) {
            cout << "Foo" << endl;
        } else if (i % 7 == 0) {
            cout << "Bar" << endl;
        } else {
            cout << "Baz" << endl;
        }
    }

    return 0;
}
