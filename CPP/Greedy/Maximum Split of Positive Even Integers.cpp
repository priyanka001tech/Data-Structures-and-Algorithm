class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> ans;
        if(finalSum%2!=0) return ans;
        long long j=2;
        while(finalSum!=0){
            if(finalSum-j<=j){
                ans.push_back(finalSum);
                return ans;
            }
            ans.push_back(j);
            finalSum-=j;
            j+=2;
        }
        return ans;
    }
};
