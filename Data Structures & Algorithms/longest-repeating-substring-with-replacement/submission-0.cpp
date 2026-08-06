class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        unordered_map<char, int> freq;
        int res =0, i =0, maxFreq = 0;

        for(int j=0;j<n;j++){
            char ch = s[j];
            freq[ch]++;
            maxFreq = max(maxFreq, freq[ch]);
            while((j-i+1)-maxFreq > k){
                freq[s[i]]--;
                i++;
            }
            res = max(res, j-i+1);
        }
        return res;
        
        
    }
};