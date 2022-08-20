class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        vector<int> ans;
        int startrows = 0;
        int startcols = 0;
        int endrows = a.size()-1;
        int endcols = a[0].size()-1;
        int total = (a.size()) * (a[0].size());
        int count = 1;
        //print start row
        while(count<=total){
            //print start row
            for(int i=startcols;i<=endcols && count<=total;i++){
                ans.push_back(a[startrows][i]);
                count++;
            }
            startrows++;
            
            //print ending col
            for(int i=startrows;i<=endrows && count<=total;i++){
                ans.push_back(a[i][endcols]);
                count++;
            }
            endcols--;
            
            //print ending row
            for(int i=endcols;i>=startcols && count<=total;i--){
                ans.push_back(a[endrows][i]);
                count++;
            }
            endrows--;
            //print start col
            for(int i=endrows;i>=startrows && count<=total;i--){
                ans.push_back(a[i][startcols]);
                count++;
            }
            startcols++;
        }
        return ans;   
    }
};