class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int ans = 0;
        if(h==n)return (*max_element(piles.begin(), piles.end()));
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        while(l<=r){
            int mid = l + (r-l)/2;
            long long hrs = 0;
            for(int i=0;i<n;i++){
                hrs += (1LL * piles[i] + mid - 1)/mid;
            }
            if(hrs<=h){
                ans = mid;
                r = mid-1;
            }
            else l = mid+1;
        }
        return ans;
    }
};
