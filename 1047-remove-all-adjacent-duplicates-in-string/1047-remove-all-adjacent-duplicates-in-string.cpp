class Solution {
public:
    string removeDuplicates(string s) {
        string st;
        st.push_back(s[0]);
        for(int i=1;i<s.length();i++){
            if(st.back() == s[i])
                st.pop_back();
            else
                st.push_back(s[i]);
        }
        
        return st;
    }
};