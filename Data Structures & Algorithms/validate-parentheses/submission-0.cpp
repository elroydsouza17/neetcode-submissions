class Solution {
public:
    bool isValid(string s) {

        std::unordered_map<char, char> hashMap;
        std::stack<char> brackets;

        hashMap[')'] = '(';
        hashMap['}'] = '{';
        hashMap[']'] = '[';

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == '('  || s[i] == '{'  || s[i] == '[')
            {
                brackets.push(s[i]);
            } else if(brackets.size() > 0 && hashMap[s[i]] == brackets.top()){
                brackets.pop();
            } else {
                return false;
            }
        }

        if(brackets.empty())
        {
            return true;
        }

        return false;


    }
};
