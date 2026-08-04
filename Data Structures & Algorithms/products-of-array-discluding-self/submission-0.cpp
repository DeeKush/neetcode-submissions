class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref;
        pref.push_back(nums[0]);
        for(int i =1;i<n;i++){
            pref.push_back(nums[i]*pref.back());
        }
        vector<int> suff;
        suff.push_back(nums[n-1]);
        for(int i =n-2;i>=0;i--){
            suff.push_back(nums[i]*suff.back());
        }
        reverse(suff.begin(), suff.end());

        vector <int> res;
        for(int i=0;i<n;i++){
            int ans = 1;
            if(i>0)ans *= pref[i-1];
            if(i<n-1) ans *= suff[i+1];
            res.push_back(ans);
        }
        return res;
    }
};