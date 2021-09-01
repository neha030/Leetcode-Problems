//  https://leetcode.com/problems/intersection-of-two-arrays/ : Link to the Problem

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int hash[1001]={0};
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            hash[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(hash[nums2[i]])
            {
                ans.push_back(nums2[i]);
                hash[nums2[i]]=0;
            }
        }
        return ans;
    }
};