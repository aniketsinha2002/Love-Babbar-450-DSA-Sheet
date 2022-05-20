
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //before sorting [7 10 4 20 15]
         int smallest,size=r+1;
         sort(arr,arr+size); // after sorting [4 7 10 15 20]
         smallest=arr[k-1]; // 1st min soln = arr[1-1] = arr[0] = 4
                     // 2nd min soln = arr[2-1] = arr[1] = 7
                     // kth minumun element is arr(k-1)th element after sorting
         return smallest; // return smallest
    }
};
