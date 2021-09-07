// https://leetcode.com/problems/first-missing-positive/ : Link to the Problem

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ans=1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]>ans)
            {
                return ans;
            }
            if(nums[i]==ans)
            {
                ans++;
            }
        }
        return ans;
    }
