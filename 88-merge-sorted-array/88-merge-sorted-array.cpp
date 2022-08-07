class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//  approach 1 based on insertion sort tc: O N^2
//         int temp;
//         int i=--m;
//         int j=0;
        
//         while(j<nums2.size()){
//             temp = nums2[j];
//             while(i>=0){
//                 if(nums1[i]>temp){
//                     nums1[i+1] = nums1[i];
//                     i--;
//                 }
//                 else{
//                     break;
//                 }
//             }
//             nums1[i+1] = temp;
//             j++;
//             i = ++m;
//         }
        
        //approach 2
        int i=0;
        int j=0;
        vector<int> nums3;
        while(i<m && j<n){
            if(nums2[j]<nums1[i]){
                nums3.push_back(nums2[j]);
                j++;
            }
            else{
                nums3.push_back(nums1[i]);
                i++;
            }
        }
        
        while(i<m){
            nums3.push_back(nums1[i]);
            i++;
        }
        
        while(j<n){
            nums3.push_back(nums2[j]);
            j++;
        }
        
        nums1 = nums3;
        
    }
};