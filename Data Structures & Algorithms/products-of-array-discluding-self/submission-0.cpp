class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      std::vector<int> prefix;
      std::vector<int> postfix;
      std::vector<int> output;

      int res = 1;
      for (int i = 0; i < nums.size(); i++) {
        if (i == 0) {
          prefix.push_back(1);
          continue;
        } else {
          res *= nums[i - 1];
          prefix.push_back(res);
        }
      }

      res = 1;
      for (int i = nums.size() - 1; i >= 0; i--) {
        if (i == nums.size() - 1) {
          postfix.push_back(1);
          continue;
        } else {
          res *= nums[i + 1];
          postfix.push_back(res);
        }
      }

      for (int i = 0; i < nums.size(); i++) {
        output.push_back(prefix[i] * postfix[nums.size() - 1 - i]);
      }

      return output;

    }
};
