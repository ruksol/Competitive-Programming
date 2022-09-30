//question link: https://leetcode.com/problems/number-of-good-pairs/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int gp = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i<j){
                    if(nums[i]==nums[j]){
                        gp++;
                    }
                }
            }
        }
        return gp;
    }
};