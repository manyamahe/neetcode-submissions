class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s.size()==1){ return false;}
        for(auto it:s){
            
            if(it=='['||it=='{'||it=='('||st.empty()){
                st.push(it);
            }else{
                if(it==']'&&st.top()=='['){
                    st.pop();
                }else if(it=='}'&&st.top()=='{'){
                    st.pop();
                }else if(it==')'&&st.top()=='('){
                    st.pop();
                }else{
                    break;
                }
            }
        }
        if(st.size()==0){
            return true;
        }
        return false;
    }
};
