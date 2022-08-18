class Solution {
public:
int minimumDeletions(vector<int>& nums) {
    int size = nums.size();
    
    int mini = INT_MAX;
    int maxi = INT_MIN;
    
    int min_index = 0;
    int max_index = 0;
    
    for( int i=0 ; i <size ;i++){
        if( nums[i] < mini ){
            mini = nums[i];
            min_index = i;
        }
        
        if( nums[i] > maxi ){
            maxi = nums[i];
            max_index = i;
        }
        
    }
                    
    int count_front = 0;
    int count_back = 0;
    int count_mix = 0;
    
    count_front = max (min_index+1 , max_index+1 ) ;
    count_back = max( size - min_index  , size-max_index );
    
    if(min_index < max_index )
        count_mix = min_index+1 + (size - max_index);
    else
        count_mix = max_index+1 + (size - min_index);
    
    
    int ans = min (count_mix , min(count_front,count_back ) );
    
    return ans;
}

};