class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> freq;

        for (char c : t)
            freq[c]++;

        int required = t.size();
        int i = 0;

        int minLen = INT_MAX;
        int start = 0;

        for (int j = 0; j < s.size(); j++) {
            if (freq[s[j]] > 0)
                required--;

            freq[s[j]]--;

            while (required == 0) {
                if (j - i + 1 < minLen) {
                    minLen = j - i + 1;
                    start = i;
                }

                freq[s[i]]++;

                if (freq[s[i]] > 0)
                    required++;

                i++;
            }
        }

        return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
    }
};
