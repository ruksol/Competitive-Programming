//question linK: https://leetcode.com/problems/next-greater-element-i/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> umap;
        stack<int>st;
        int n = nums2.size();
        for(int i=n-1; i>=0; i--){
            int x = nums2[i];
            while(!st.empty() && st.top()<=x){
                st.pop();
            }
            int y = (st.empty())? -1 : st.top();
            umap.insert({x, y});
            st.push(x);
        }

        vector<int> ans;
        for(auto x: nums1){
            ans.push_back(umap[x]);
        }
        return ans;
    }
};