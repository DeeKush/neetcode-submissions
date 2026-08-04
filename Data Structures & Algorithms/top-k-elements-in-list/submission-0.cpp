class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map <int, int> mp;
        for(int x:nums){
            mp[x]++;
        }        
        vector<vector<int>> buckets(n+1);
        for(auto [num, freq] : mp){
            buckets[freq].push_back(num);
        }
        vector<int> res;
        for(int i = n;i>=1 && (int)res.size()<k; i--){
            for(int num : buckets[i]){
                res.push_back(num);
                if((int)res.size() == k)break;
            }
        }
        return res;

    }
};