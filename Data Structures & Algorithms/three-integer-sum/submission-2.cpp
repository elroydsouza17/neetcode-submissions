class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      std::sort(nums.begin(), nums.end());
      std::vector<std::vector<int>> output;
      int target = 0;
      for (int i = 0; i < nums.size()  - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
          continue;
        }

        int left = i + 1;
        int right = nums.size() - 1;

        while (left < right) {
          if (nums[i] + nums[left] + nums[right] == target) {
            output.push_back({nums[i], nums[left], nums[right]});
            left++;
            while (nums[left] == nums[left - 1] && left < right) {
              left++;
            }
          } else if (nums[i] + nums[left] + nums[right] < target) {
            left++;
          } else {
            right--;
          }
        }
      }

      return output;
    }
};
