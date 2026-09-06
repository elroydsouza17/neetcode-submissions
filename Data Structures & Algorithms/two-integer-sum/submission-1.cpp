class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hashMap;
        std::vector<int> indices;
        for (int i = 0; i < nums.size(); i++) {
            hashMap.insert({nums[i], i});
        }

        for (int i = 0; i < nums.size(); i++) {
            auto it =  hashMap.find(target - nums[i]); 
            if (it != hashMap.end() && hashMap[target - nums[i]] != i && i < hashMap[target - nums[i]]) {
                indices.push_back(i);
                indices.push_back(hashMap[target - nums[i]]);
                return indices;
            } else if (it != hashMap.end() && hashMap[target - nums[i]] != i && i > hashMap[target - nums[i]]) {
                indices.push_back(hashMap[target - nums[i]]);
                indices.push_back(i);
                return indices;
            }
        }

        return indices;
    }
};
