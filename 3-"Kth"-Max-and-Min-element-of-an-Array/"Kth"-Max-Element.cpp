
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //before sorting [7 10 4 20 15]
         int largest,size=r+1;
         sort(arr,arr+size); // after sorting [4 7 10 15 20]
         largest=arr[size-k]; // 1st max soln = arr[5-1] = arr[4] = 20
                     // 2nd max soln = arr[5-2] = arr[3] = 15
                     // kth maximum element is arr(n-k)th element after sorting
         return largest; // return largest
    }
};
