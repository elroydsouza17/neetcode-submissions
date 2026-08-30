class Solution {
public:
    bool isPalindrome(string s) {
    int pointer1 = 0;
    int pointer2 = s.size() - 1;

    while (pointer1 <= pointer2)
    {
        while((pointer1 < pointer2) && (s[pointer1] < '0' || (s[pointer1] > '9' && s[pointer1] < 'A') || (s[pointer1] > 'Z' && s[pointer1] < 'a') || s[pointer1] > 'z')) {
            pointer1++;
        }

        while((pointer1 < pointer2) && (s[pointer2] < '0' || (s[pointer2] > '9' && s[pointer2] < 'A') || (s[pointer2] > 'Z' && s[pointer2] < 'a') || s[pointer2] > 'z')) {
            pointer2--;
        } 
            
        if(std::tolower(s[pointer1]) == std::tolower(s[pointer2])) {
            pointer1++;
            pointer2--;        
        } else {
            return false;
        }
    }

    return true;
    
}
};
