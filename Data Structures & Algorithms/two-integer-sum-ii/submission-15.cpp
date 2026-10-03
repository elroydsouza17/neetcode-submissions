class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int sum;
      int left = 0;
      int right = numbers.size() - 1;
      std::vector<int> result;

      while (left < right) {
        sum = numbers[left] + numbers[right];
        if (sum == target) {
          std::cout << "ptr1: " << left << " ptr2: " << right << std::endl;
          result.push_back(left + 1);
          result.push_back(right + 1);
          return result;
        } else if (sum > target) {
          right--;
        } else {
          left++;
        }
      }

      return result;
    }
};
