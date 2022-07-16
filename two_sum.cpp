class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); ++i) {
            seen[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); ++i) {
            const int new_target = target - nums[i];
            if (seen.count(new_target) == 1 && i != seen[new_target]) {
                return {i, seen[new_target]};
            }
        }
        return {};
    }
};
