class Solution {
public:
    bool isPalindrome(string s) {
        int n =s.size();
        int i =0,j=n-1;
        while(i<j){
            if(isalnum(s[i]) && isalnum(s[j])){
                s[i] = tolower(s[i]);
                s[j] = tolower(s[j]);
                if(s[i]!= s[j])return false;
                i++;
                j--;
            }
            else if(!isalnum(s[i]))i++;
            else if(!isalnum(s[j]))j--;
        }
        return true;

    }
};
