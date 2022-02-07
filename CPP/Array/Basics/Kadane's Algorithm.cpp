class Solution{
    public:
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int a[], int n){
        
        long long maxh = 0, maxf = a[0];
        
        //Iterating over the array.
        for(int i=0;i<n;i++) 
            {
                //Updating max sum till current index.
                maxh+=a[i];
                //Storing max sum so far by choosing maximum between max 
                //sum so far and max till current index.
                if(maxf<maxh)
                maxf=maxh; 
                
                //If max sum at current index is negative, we do not need to add
                //it to result so we update it to zero.
                if(maxh<0)
                    maxh=0;
    
            }
            //returning the result.
            return maxf;
        
    }
};
