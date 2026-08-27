class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;        
        std::unordered_map<char,int> hashMapS;
        std::unordered_map<char,int> hashMapT;

        for (int i = 0; i < s.size(); i++)
        {
            auto result = hashMapS.insert({s[i], 1});
            if(result.second == false)
            {
                hashMapS[s[i]]++;
            }
        }

        for (int i = 0; i < t.size(); i++)
        {
            auto result = hashMapT.insert({t[i], 1});
            if(result.second == false)
            {
                hashMapT[t[i]]++;
            }
        }

        for (auto [key, val]: hashMapS)
        {
            if(hashMapS[key] != hashMapT[key])
            {
                return false;
            }


        }

        return true;

    }
};
