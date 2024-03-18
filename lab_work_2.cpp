#include <iostream>
using namespace std;

int main() {
    int n;
    int x;


    cout << "Enter a value for n: ";
    cin >> n;

    if (n < 26) {
        x = 1;
    } else if (n >= 26 && n <= 28) {
        x = 2;
    } else if (n == 30) {
        x = 3;
    } else if (n == 33) {
        x = 4;
    } else {
        cout << "Is accepted" << endl;
        return 0;
    }

    cout << "x = " << x << endl;

    return 0;
}