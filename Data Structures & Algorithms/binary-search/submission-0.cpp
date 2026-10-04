class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mid = low + ((high - low) / 2);

        while (nums[mid] != target) {
            if (low >= high) {
                return -1;
            }

            if (target < nums[mid]) {
                high = mid;
                mid = low + ((high - low) / 2);
            } else {
                low = mid + 1;
                mid = low +((high - low) / 2);
            }
        }

        return mid;
    }
};
