class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
      int right = 0;
      std::unordered_map<char, int> hash_map;
      int most_freq;
      int max_substr_size = 0;

      while (right < s.size()) {
        hash_map[s[right]]++;
        most_freq =  0;
        for (auto& it: hash_map) {
          if (it.second > most_freq) {
            most_freq = it.second;
          }
        }
        // std::cout << "MOST FREQUENT: " << most_freq << std::endl;
        int res = right - left + 1 - most_freq;
        // std::cout << "RES: " << res << std::endl;
        // std::cout << "Right: " << right << std::endl;
        while (res > k) {
          hash_map[s[left]]--;
          left++;
          res = right - left + 1 - most_freq;
        }

        if ((right - left + 1) > max_substr_size) {
          max_substr_size = right - left + 1;
        }

        right++;
      }

      return max_substr_size;
    }
};
