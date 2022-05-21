#include <iostream>
using namespace std;

int main() {
    int n,arr[n],j=0;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
	
	for(int i=0;i<n;i++)    // [ 5 , 4 , -1 , -3 , 2 ]
	{
	    if(arr[i]<0){        // j sets to 0 and iterating i
	        swap(arr[i],arr[j++]); // when i found a -ve no swap that with j (J=0)
	        // and then j is increased by 1 as 1st position got filled with -ve number
	    }
	}
	
	for(int i=0;i<n;i++)
	    cout<<arr[i]<<" ";
	        
	
	
	return 0;
}
