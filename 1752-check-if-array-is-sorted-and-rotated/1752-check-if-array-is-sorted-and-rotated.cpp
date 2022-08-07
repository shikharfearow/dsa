class Solution {
public:
    bool check(vector<int>& nums) {
        if(nums.size() == 1)
            return true;
        int pairCount = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                pairCount++;
            }
        }
        
        if(nums[0]<nums[nums.size()-1]){
            pairCount++;
        }
        
        return pairCount <=1;
        
    }
};