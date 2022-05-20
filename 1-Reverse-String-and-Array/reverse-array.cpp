#include <iostream>
using namespace std;

int main() {
    int i,n,arr[n];
    cin>>n;
	
	int start=0,end=n-1;
	
	for(i=0;i<n;i++)
	cin>>arr[i];
	
    while(start<end)
    {
        swap(arr[start],arr[end]); // swap function to swap end and last element
        start++;
        end--;
    }
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
	return 0;
}
