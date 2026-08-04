class Solution {
public:

    string encode(vector<string>& strs) {
        int n = strs.size();
        string res = "";
        for(string s : strs){
            res+= to_string(s.size());
            res+= "#";
            res += s;
        }
        return res;

    }

    vector<string> decode(string s) {
        int i=0;
        int n = s.size();
        vector<string> res;
        while(i<n){
            int j = i;
            while(s[j]!='#')j++;
            int len = stoi(s.substr(i, j-i));
            string str = s.substr(j+1, len);
            res.push_back(str);
            i = j + len + 1;
        }
        return res;


    }
};
