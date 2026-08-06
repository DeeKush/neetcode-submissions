class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        if(n>m)return false;
        int i =0;
        int j = i+n-1;
        unordered_map<char, int> freq1;
        unordered_map<char, int> freq2;
        for(int i=0;i<n;i++){
            freq1[s1[i]]++;
        }
        for(int i=0;i<n;i++){
            freq2[s2[i]]++;
        }

        if(freq1 == freq2)return true;
        while(j<m-1){
            freq2[s2[i]]--;
            if (freq2[s2[i]] == 0) freq2.erase(s2[i]);
            i++;
            j++;
            freq2[s2[j]]++;

            if(freq1 == freq2)return true;
        }
        return false;
        
    }
};