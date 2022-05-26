// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        if(n==1)
         return 0;
         
         sort(arr, arr+n); // [1,5,8,10] , k=2
         
         int mn,mx; // temp min=1+2 = 3 , temp max=10-2 = 8
         
         int temp_height = arr[n-1] - arr[0]; // 8-3=5
         
        for(int i=1; i<n; i++)
        {   
            if(arr[i]-k<0) continue; // if -ve skip
            
            // else if [i]-k > or = '0' do this below
            
            mx = max (arr[i-1]+k,arr[n-1]-k); // max of ( 1+2 && 5+2 && 8+2 with 8) = 10
            mn = min (arr[0]+k,arr[i]-k); // min of (3 with 5-2 && 8-2 && 10-2) = 3
                                           //max-min=10-3=7
            temp_height=min(temp_height,mx-mn);  // min of (5,7) = 5 
                                                 // Hence 5 ans
        }
        return temp_height;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
