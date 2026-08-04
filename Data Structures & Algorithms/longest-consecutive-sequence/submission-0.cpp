class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n==0) return 0;
        int maxLen = 1;
        sort(nums.begin(), nums.end());
        int len = 1;
        for(int i=0;i<n-1;i++){
            int diff = nums[i+1] -nums[i];
            if(diff == 0)continue;
            else if(diff ==1)len++;
            else {
                maxLen = max(len, maxLen);
                len = 1;
            }
        }
        maxLen = max(len, maxLen);
        return maxLen;
        
    }
};