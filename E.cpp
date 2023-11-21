#include <iostream>
using namespace std;
int main() {
    int arr[1000];
    int n;
    
    cin >> n;
    for (int i=0; i<n; i++) 
        cin >> arr[i];
        
    int mn = arr[0];
    int mnindex=0;

    for(int i=1; i<n; i++)
    {
       if( arr[i] < mn) {
            mn = arr[i];
            mnindex = i;
        } 
    }
    
    mn=arr[mnindex];
    arr[mnindex]=arr[0];
    arr[0]=mn;
    
    for (int i=0; i<n; i++) 
    cout << arr[i]<<" ";
        return 0;
}
