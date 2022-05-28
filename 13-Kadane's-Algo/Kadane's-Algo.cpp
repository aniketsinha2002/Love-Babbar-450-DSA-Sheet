// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){
        int maxsum=-1000, currsum=0;
        /*max sum is initialized to maximum negative value possible
        according to the constraints to get the solution when there
        will be all negative numbers as well*/
        for(int i=0;i<n;i++){  // Kadane's Algorithm implementation
            currsum=currsum + arr[i]; 
            
            if(currsum > maxsum)
                maxsum=currsum;
            if(currsum < 0)
                currsum=0;
        }
        
        return maxsum;
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
