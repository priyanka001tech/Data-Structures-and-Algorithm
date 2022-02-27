# 2187. Minimum Time to Complete Trips

// You are given an array time where time[i] denotes the time taken by the ith bus to complete one trip.

// Each bus can make multiple trips successively; that is, the next trip can start immediately after completing the current trip. Also, each bus operates independently; that is, the trips of one bus do not influence the trips of any other bus.

// You are also given an integer totalTrips, which denotes the number of trips all buses should make in total. Return the minimum time required for all buses to complete at least totalTrips trips.

// Example 1:

// Input: time = [1,2,3], totalTrips = 5
// Output: 3
// Explanation:
// - At time t = 1, the number of trips completed by each bus are [1,0,0]. 
//   The total number of trips completed is 1 + 0 + 0 = 1.
// - At time t = 2, the number of trips completed by each bus are [2,1,0]. 
//   The total number of trips completed is 2 + 1 + 0 = 3.
// - At time t = 3, the number of trips completed by each bus are [3,1,1]. 
//   The total number of trips completed is 3 + 1 + 1 = 5.
// So the minimum time needed for all buses to complete at least 5 trips is 3.

// CODE:

class Solution {
private:
    long long int findNoOfTripsGivenTime(vector<int>& time, long long int mid){
        long long int ans=0;
        for(auto i:time){
            long long int x=i;
            ans+=(mid/x);
        }
        return ans;
    }
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long int  n=time.size();
        long long int  l=1, r=1e14, ans=0;
        while(l<r){
            long long int mid = l + (r-l)/2;
            if(findNoOfTripsGivenTime(time, mid)>=totalTrips){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};
