class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        
        unordered_map<char, int> result;
        for(int i = 0; i < s.length(); i++){
            result[s[i]]++;
            result[t[i]]--;            
        }

        for(auto pair : result){
            if(pair.second != 0){
                return false;
            }
        }
        return true;
    }
};
