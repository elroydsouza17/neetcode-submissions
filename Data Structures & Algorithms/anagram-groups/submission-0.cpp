class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    std::unordered_map<std::string, int> map;
    std::vector<std::vector<std::string>> output;
    int count = 0;
    for (int i = 0; i < strs.size(); i++) {
      std::string sorted_str = strs[i];
      std::sort(sorted_str.begin(), sorted_str.end());
      if (auto result = map.insert({sorted_str, count}); result.second == true) {
        output.push_back({strs[i]});
        count++;
      } else {
        output[map[sorted_str]].push_back(strs[i]);
      }
    }
    return output;

    }
};
