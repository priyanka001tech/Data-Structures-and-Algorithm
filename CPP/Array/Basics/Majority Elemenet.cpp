// APPROACH 1 USING SORTING
// Explanation:
// 1. Basic idea is that we will sort the array
// 2. The element which is present more than size/2 time must appear at the mid of the vector.
// 3. Return the middle element.
// Time Complexity: O(nlogn)
// Space Complexity: O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end()); // sort the vector
        return nums[nums.size()/2];     // middle element will be the most frequent Element
    }
};
// APPROACH 2 USING HASH MAP
// Hash Map
// 1. Count the number of appearances for each distinct number in nums,
// 2. once we see a number appear more than n / 2 times, it is the majority element
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans ;
        
        for(int i = 0; i< nums.size(); i++)
        {
            // storing frequency/occurences of  elements in a map
            m[nums[i]]++;
        }
        
        for(int i = 0; i< nums.size(); i++)
        {
		    // if freg of an element is greater than num.size()/2
            if(m[nums[i]] > (nums.size()/2))
            {
                ans =  nums[i];
            break;
            }
        }
        return ans;   // ans
    }
};
// APPROACH 3 USING MOORE'S VOTING ALGORITHM
// 1. Basic idea of the algorithm is if we cancel out each occurrence of an element e,
// with all the other elements that are different from e then e will exist till end if it is a majority element. 
// 2. Below code loops through each element and maintains a count of the element that has the potential of being the majority element.
// 3. If next element is same then increments the count, otherwise decrements the count.
// 4. If the count reaches 0 then update the potential index to the current element and sets count to 1.
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int n = nums.size();
        int  maj = nums[0], cnt = 1;
        
        for(int i=1;i<n;++i)
        {
		    // If next element is same then increments the count, otherwise decrement
            if(nums[i] == maj)
                cnt++;
            else
                cnt--;
            
            if(cnt == 0)
            {
                maj = nums[i];
                cnt = 1;
            }
        }
        return maj;
    }
};
