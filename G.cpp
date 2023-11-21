#include <iostream>
using namespace std;
int main() {
    int arr[100];
    int n;
    cin >> n;
    
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    double avrg = 0;
    for (int i = 0; i < n; ++i) {
        avrg = avrg + arr[i];
    }
    avrg = avrg / n;

    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > avrg) {
            sum = sum + arr[i];
            ++count;
        }
    }
    cout << sum << " " << count;

}
