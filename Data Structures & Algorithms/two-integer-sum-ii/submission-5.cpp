class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> indices;
        unordered_map<int, int> hash_map;
        for (int i = 0; i < numbers.size(); i++) {
            auto result = hash_map.insert({numbers[i], i});
            if (result.second == false) {
                hash_map[numbers[i]] = i;
            }
        }
        
        //loop through array and find hashmap.
        for (int i = 0; i < numbers.size(); i++) {
            if (hash_map.find(target - numbers[i]) != hash_map.end()  && (i < hash_map[target - numbers[i]])) {
                indices.push_back(i + 1);
                indices.push_back(hash_map[target - numbers[i]] + 1);
                return indices;
            }
        }

        return indices;
    }
};
