// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n) // SOLVING BY DUCH NATIONAL FLAG ALGORITHM 
    //TIME Complexity - O(N), SPACE COMPLEXITY - O(1)
    {
        int low=0,mid=0,high=n-1;
        
        while(mid<=high)
        {
            switch (a[mid]){
                
                case 0: // If Element is 0
                    swap(a[low++],a[mid++]); 
                    break;
                    
                case 1:  // If Element is 1
                    mid++;
                    break;
                    
                case 2: // If Element is 2
                    swap(a[mid],a[high--]); 
                    break;
            }
        }
         
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
