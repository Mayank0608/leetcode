class Solution {
public:
    int minMoves(vector<int>& nums) {
        // 1. Sort the array -> [4, 4, 5]
        sort(nums.begin(), nums.end());
        
        int count = 0;
         // min_element is 4
        
        // 2. Find difference of each element from 4
        for(int i = 0; i < nums.size(); i++) {
            count += ( nums[nums.size() - 1] - nums[i]);
        }
        
        return count; 
    }
};
