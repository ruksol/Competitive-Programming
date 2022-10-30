//question link : https://leetcode.com/problems/evaluate-reverse-polish-notation/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
 
        stack<int> st;
        long long int x ,y;
 
        for(int i=0;i<tokens.size();i++){
            string str = tokens[i];
            if(str == "+" || str == "-" || str == "*" || str == "/"){
                x = st.top();
                st.pop();
                y = st.top();
                st.pop();
 
                if(tokens[i] == "+"){
                    st.push(x+y);
                }
                else if(tokens[i] == "-"){
                    st.push(y-x);
                }
                else if(tokens[i] == "*"){
                    st.push(x*y);
                }
                else{
                    st.push(y/x);
                }
 
            }
            else{
                st.push(stoi(tokens[i]));
            } 
 
        }
        return st.top();
    }
};