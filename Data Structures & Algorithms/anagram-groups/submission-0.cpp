class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> arr;

        for(string str : strs){
            
            string key = str;

            sort(key.begin(), key.end());

            arr[key].push_back(str);
            
        }

        vector<vector<string>> result;

        for(auto pair : arr){
            result.push_back(pair.second);
        }

        return result;       
        
    }
};
