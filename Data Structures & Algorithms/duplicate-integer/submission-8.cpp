class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> hash_set;

        for (int i = 0; i < nums.size(); i++) {
            auto result = hash_set.insert(nums[i]);
            if (result.second == false) {
                return true;
            }
        }

        return false;
    }
};