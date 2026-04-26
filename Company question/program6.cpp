// * * * * *
// * 1 2 3 *
// * 1 2 3 *
// * 1 2 3 *
// * * * * *

//     * 
//     *
// * * * * *
//     * 
//     *

#include <iostream>
using namespace std;

int main() {
    // First Pattern (Box with numbers)
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 5) {
                cout << "* ";
            } else {
                cout << j - 1 << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 3 || j == 3) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
