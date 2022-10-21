//question link: https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        // for(int i=0; i<n-1; i++){
        //     for(int j=0; j<n-i-1; j++){
        //         if(nums[j]>nums[j+1]){
        //             swap(nums[j], nums[j+1]);
        //         }
        //     }
        // }
        // for(int i=0; i<n-1; i++){
        //     int min_index = i;
        //     for(int j=i+1; j<n; j++){
        //         if(nums[j]<nums[min_index]){
        //             min_index = j;
        //         }
        //     }
        //     if(min_index!=i){
        //         swap(nums[i], nums[min_index]);
        //     }
        // }
        int i, key, j;
        for(int i=1; i<n; i++){
            key = nums[i];
            j = i - 1;
            while(j>=0 && nums[j]>key){
                nums[j+1] = nums[j];
                j = j - 1;
            }
            nums[j+1]=key;
        }
    }
};