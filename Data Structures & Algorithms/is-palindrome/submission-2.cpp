class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            while (left < s.size() && (s[left] < '0' || (s[left] > '9' && s[left] < 'A') || (s[left] > 'Z' && s[left] < 'a') || s[left] > 'z')) {
                left++;
            }

        while (right >= 0 && (s[right] < '0' || (s[right] > '9' && s[right] < 'A') || (s[right] > 'Z' && s[right] < 'a') || s[right] > 'z')) {
                right--;
            }

        if ((tolower(s[left]) == tolower(s[right]))) {
            left++;
            right--;
        } else {
            return false;
        }

        }

        return true;
    }
};
