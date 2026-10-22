class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto it :tokens){
            int v1,v2;
      
            if(it=="+"){
                v1=st.top();
                st.pop();
                v2=st.top();
                st.pop();
                st.push(v2+v1);
            }else if(it=="-"){
                v1=st.top();
                st.pop();
                v2=st.top();
                st.pop();
                st.push(v2-v1);
            }else if(it=="*"){
                v1=st.top();
                st.pop();
                v2=st.top();
                st.pop();
                st.push(v2*v1);
            }else if(it=="/"){
                v1=st.top();
                st.pop();
                v2=st.top();
                st.pop();
                st.push(v2/v1);
            }else{
                st.push(stoi(it));
            }
        }
        return st.top();
    }
};
