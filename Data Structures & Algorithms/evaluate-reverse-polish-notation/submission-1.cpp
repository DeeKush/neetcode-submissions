class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> st ;
        int num;
        int i =0;
        while(i<n){
            string ch = tokens[i];
            if(ch == "+" || ch == "-" || ch =="*" || ch =="/"){
                int a = st.top();
                st.pop();            
                int b = st.top();
                st.pop();
            
                if(ch =="+")st.push(a+b);
                else if(ch =="-")st.push(b-a);
                else if(ch =="*")st.push(a*b);
                else if(ch =="/")st.push(b/a);
            }
            else{
                st.push(stoi(ch));
            }
            i++;
        }
        return st.top();
        
    }
};
