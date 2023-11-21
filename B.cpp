#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    for (int i = 1; i < n; ++i) {
        if ((array[i] > 0 && array[i - 1] > 0) || (array[i] < 0 && array[i - 1] < 0)) {
            cout << array[i - 1] << " " << array[i] << endl;
        }
    }

    return 0;
}
