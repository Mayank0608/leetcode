class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr={};
        int num=0;
        
        // 1. Your logic: Build the reference array [0, 1, 2, ... n]
        for(int i=0; i<=n; i++){
            arr.push_back(num);
            num++;
        }
        
        // 2. Safely sort nums completely so it aligns with your reference array
        sort(nums.begin(), nums.end());
        
        // 3. Your logic: Compare elements to find the mismatch
        for(int i=0; i<n; i++){
            if(nums[i] != arr[i]){
                return arr[i]; 
            }
        }
        
        // If all match, the missing number is the last one (n)
        return n; 
    } 
};
