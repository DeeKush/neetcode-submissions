class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char> st;
        int i =0;
        int j =0;
        int ans = 0;
        while(i<n && j<n){
            char ch = s[j];
            if(st.count(ch) == 0){
                st.insert(ch);
                ans = max(j-i+1, ans);
                j++;
            }else{
                // len --;
                st.erase(s[i]);
                // j++;
                // i = j;
                i++;
            }
        }
        // ans = max(len, ans);
        return ans;

    }
};
