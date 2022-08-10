class Solution {
public:
    
    bool isPermutation(int qs1[],int qs2[]){
        for(int i=0;i<26;i++){
            if(qs1[i] != qs2[i])
                return false;
        }
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();
        
        if(m>n)
            return false;
        
        int qs1[26] = {0}, qs2[26] = {0};
        
        
        //frequency map for s1
        for(int i=0;i<m;i++)
            qs1[s1[i]-'a']++;
        
        //sliding window initialization
        int j;
        for(j=0;j<m;j++){
            qs2[s2[j]-'a']++;
        }
        
        //check if pattern matched in first window
        if(isPermutation(qs1,qs2)){
                return true;
        }
         
        j = m;
        int i = 0;
        for(;j<n;j++){
            qs2[s2[i] - 'a']--;
            i++;
            qs2[s2[j] - 'a']++;
            if(isPermutation(qs1,qs2)){
                return true;
            }
        }
        
        return false;
    }
};