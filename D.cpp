#include <iostream>
using namespace std;
int main() {
    double arr[100];
    int n;
    
    cin >> n;
    for (int i=0; i<n; i++) 
        cin >> arr[i];
        
    int mx = arr[0];
    int mn = arr[0];

    for(int i=1; i<n; i++)
    {
        if( arr[i] > mx)
            mx = arr[i];

        if( arr[i] < mn)
            mn = arr[i];
    }
        
    int difference=0;
    for(int i=0; i<n; i++){
        difference = mx - mn;
    }
        cout << difference;
        return 0;
}
