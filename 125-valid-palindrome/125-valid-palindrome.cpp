class Solution {
public:
    bool isPalindrome(string s) {
        //remove alphanumeric characters
        string temp="";
        for(auto it : s){
            if((it>='A' && it<='Z')||(it>='a' && it<='z')||(it>='0' && it<='9')){
                temp.push_back(it);
            }
        }
        
        //convert to lowercase
        for(int i=0;i<temp.size();i++){
            if(temp[i]>='A' && temp[i]<='Z')
                temp[i] = temp[i] - 'A' + 'a';
        }
        
        //check palindrome
        int i=0;
        int j=temp.size()-1;
        
        while(i<j){
            if(temp[i]!=temp[j])
                return false;
            i++;
            j--;
        }
        
        return true;
    }
};