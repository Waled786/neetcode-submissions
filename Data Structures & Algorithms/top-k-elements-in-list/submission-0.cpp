class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for(int num : nums){
            freq[num]++;
        }

        vector<pair<int, int>> bucket;

        for(auto pair : freq){
            bucket.push_back({pair.second, pair.first});

        }

        sort(bucket.rbegin(), bucket.rend());

        vector<int> result;

        for(int i = 0; i < k; i++){
            result.push_back(bucket[i].second);
        }

        return result;

    }    
};
