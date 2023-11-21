#include <iostream>
using namespace std;
int main() {
    int arr[1000];
    int n;
    
    cin >> n;
    for (int i=0; i<n; i++) 
        cin >> arr[i];
        
    int mx = arr[0];
    int mnindex=0;

    for(int i=1; i<n; i++)
    {
       if( arr[i] >= mx) {
            mx = arr[i];
            mnindex = i;
        } 
    }
    
    mx=arr[mnindex];
    arr[mnindex]=arr[n-1];
    arr[n-1]=mx;
    
    for (int i=0; i<n; i++) 
    cout << arr[i]<<" ";
        return 0;
}
