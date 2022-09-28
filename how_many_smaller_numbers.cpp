//question link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            ans.push_back(0);
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(nums[j]<nums[i]){
                    ans[i]++;
                }
            }
        }
        return ans;
    }
};