// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
    static void fixArray2(int arr2[],int m)
    {
        for(int i=1;i<m;i++)
        {
            if(arr2[i]<arr2[i-1])
            {
                int temp=arr2[i-1]; //swap to sort 2nd arry according to the condition
	            arr2[i-1]=arr2[i];
	            arr2[i]=temp;
                
            }
        }
    }
	void merge(int arr1[], int arr2[], int n, int m) {
	     int i=0,j=0;
	     
	     while(i<n){
	         if(arr1[i]>arr2[j])
	         {
	            int temp=arr1[i]; // swaping 
	            arr1[i]=arr2[j];
	            arr2[j]=temp;
	            
	            fixArray2(arr2,m); // sorting 2nd array
	         }
	        i++;
	     }
	    
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
