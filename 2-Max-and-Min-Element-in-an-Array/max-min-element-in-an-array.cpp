
pair<long long, long long> getMinMax(long long a[], int n) {
    //INt_MAX INT_MIN applications
    // [3 2 1 56 1000 167] 
    long long i;
    //INT_MIN = -2147483648 
    //INT_MAX = 2147483647
   long long min= INT_MAX, max= INT_MIN; // setting min to highest value & max to lowest value
    for(i=0;i<n;i+=1)
{   
    if(min>a[i]) // (2147483647>3) :. min = 3
     min=a[i]; //  (3>2) :. min = 2
     
     if(max<a[i]) // (-2147483648<3) :. max = 3
     max=a[i]; //   (3<2) :. max = 3
}
  
     return {min,max};
}
