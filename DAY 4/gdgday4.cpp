#include <iostream>
using namespace std;

int main() {
    int t;
    cout << "Enter the number of test cases you want to test: ";
    cin >> t;

    while (t--) {
        int x, y, z;
        cout << "Enter the number of colleges (X), students per college (Y), and students passed (Z): ";
        cin >> x >> y >> z;

        int totalStudents = x * y;

        if (z > totalStudents / 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

