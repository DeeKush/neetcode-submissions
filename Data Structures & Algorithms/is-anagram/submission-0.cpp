class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n!=m)return false;
        unordered_map <char, int> st1;
        for(char ch : s){
            st1[ch]++;
        }
        unordered_map <char, int> st2;
        for(char ch : t){
            st2[ch]++;
        }
        return st1 == st2;
        

        

    }
};
