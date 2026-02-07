#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Frequency count
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        // Step 2: Buckets (index = frequency)
        vector<vector<int>> buckets(nums.size() + 1);
        for (auto &it : freq) {
            buckets[it.second].push_back(it.first);
        }

        // Step 3: Pick top k elements
        vector<int> result;
        for (int i = buckets.size() - 1; i >= 0 && result.size() < k; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                if (result.size() == k)
                    break;
            }
        }
        return result;
    }
};
