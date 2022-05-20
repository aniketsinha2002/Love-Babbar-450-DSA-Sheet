
string reverseWord(string str){
    
  //swapping method
  	int n = str.length(),start=0,end=n-1; // initialize start to 1st element and end to last element
	
    while(start<end)
    {
        swap(str[start],str[end]); // swap function to swap end and last element
        start++;
        end--;
    }
    
    cout<<str;
}
