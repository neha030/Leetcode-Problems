// https://leetcode.com/problems/intersection-of-two-arrays-ii/  : Link to the problem

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i : nums1)
            m[i]++;
        for(int i : nums2)
        {
            if(m[i]>0 && m.find(i)!=m.end())
            {
                m[i]--;
                ans.push_back(i);
            }
        }
        return ans;
    }
};