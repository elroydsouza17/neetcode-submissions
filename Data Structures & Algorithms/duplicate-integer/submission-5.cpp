class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        std::set<int> hashSet;

        for (int i = 0; i < nums.size(); i++)
        {
            auto result = hashSet.insert(nums[i]);
            if(result.second == false) return true;
        }

        return false;
    }
};