// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int mergeSort(long long arr[], long long l,long long h)
    {
        // Your Code Here
        long long inv=0;
        if(h>l)
        {
            long long mid=(h+l)/2;
            
            inv+= mergeSort(arr,l,mid);
            inv+= mergeSort(arr,mid+1,h);
            inv+= merge(arr,l,mid,h);
        }
        
        return inv;
    }
    
    long long merge(long long arr[],long long l,long long mid,long long h){
        long long inv=0;
        long long n1=mid-l+1;
        long long n2=h-mid;
        long long L[n1];
        long long R[n2];
        
        for(int i=0;i<n1;i++){
            L[i]=arr[l+i];
        }
        for(int j=0;j<n2;j++){
            R[j]=arr[mid+1+j];
        }
            int i=0,j=0;
            long long k=l;
            
            while(i<n1 && j<n2)
            {
                if(L[i]<=R[j])
                {
                    arr[k]=L[i];
                    i++;
                }
                else
                {
                    arr[k]=R[j];
                    inv+=n1-i;
                    j++;
                }
                k++;
            }
        while (i<n1){
            arr[k++]=L[i++];
        }
        
        while (j<n2){
            arr[k++]=R[j++];
        }
        
        return inv;
    }
    long long int inversionCount(long long arr[], long long N)
    {
       return mergeSort(arr,0,(long long)(N-1));
    }
    
    
};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends
