class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN, mini=INT_MAX, min_div=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                nums[i]*=2;
            }
            maxi=max(maxi,nums[i]);
            mini=min(mini, nums[i]);
        }
        priority_queue<int> pq;
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        
        while(pq.top()%2==0){
            int a=pq.top();
            pq.pop();
            min_div=min(min_div, a-mini);
            a/=2;
            mini=min(mini,a);
            pq.push(a);
            
        }
        
        min_div=min(min_div, pq.top()-mini);
        return min_div;
        
    }
};
