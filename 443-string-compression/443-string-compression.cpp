class Solution {
public:
    
    void pushint(vector<char> &st,int n){
        if( n == 0){
            return;
        }
        
        pushint(st,n/10);
        st.push_back((char) (n%10 + 48));
    }
    
    int compress(vector<char>& chars) {
        int i=0;
        int j=0;
        vector<char> st;
        while(j<chars.size()){
            if(chars[i] != chars[j]){
                st.push_back(chars[i]);
                if(j-i > 1) pushint(st,j-i);
                i=j;
            }
            j++;
        }
        
        st.push_back(chars[i]);
        if(j-i > 1)
            pushint(st,j-i);
        
        for(int i=0;i<st.size();i++){
            chars[i] = st[i];
        }
        
        return st.size();
    }
};