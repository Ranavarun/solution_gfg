pair<long long, long long> getMinMax(long long a[], int n) {
   long long int min = INT_MAX;
   long long int max = INT_MIN;
    
    for(int i = 0;i<n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
        if(a[i]<min)
        {
            min = a[i];
        }
        
        
    }
    // getMinMax.first(min);
    //   getMinMax.second(max);
    
    
     return {min, max};
     
}
