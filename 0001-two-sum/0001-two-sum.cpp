class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            // If complement exists in map, return the pair of indices
            if (mp.find(complement) != mp.end()) {
                return { mp[complement], i };
            }

            // Store the current number with its index
            mp[nums[i]] = i;
        }

        // Just in case no solution found (though LeetCode says one solution always exists)
        return {};
    }
};
