#include <iostream>
#include <iomanip>  // for setw()
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    int num = 1;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces for alignment
        cout << setw((n - i) * 3) << "";

        // Print numbers in each row
        for (int j = 1; j <= i; j++) {
            cout << setw(3) << num++;
        }
        cout << endl;
    }

    return 0;
}

