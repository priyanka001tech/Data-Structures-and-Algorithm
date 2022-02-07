class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
    	
        // Create an empty array to store result
        int temp[n];
     
        // Traversal array and store +ve element in
        // temp array
        int j = 0; // index of temp
        for (int i = 0; i < n ; i++)
            if (arr[i] >= 0 )
                temp[j++] = arr[i];
     
        // If array contains all positive or all negative.
        if (j == n || j == 0)
            return;
     
        // Store -ve element in temp array
        for (int i = 0 ; i < n ; i++)
            if (arr[i] < 0)
                temp[j++] = arr[i];
     
        // Copy contents of temp[] to arr[]
        memcpy(arr, temp, sizeof(temp));
        
    }
};
