// https://leetcode.com/problems/two-sum/ : Link to the Problem

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map;
        vector<int>res(2);
        int val;
        for(int i=0; i<nums.size();i++)
        {
            map.insert(make_pair(nums[i],i));
        }
        for(int i=0; i<nums.size();i++)
        {
           val=target-nums[i];
            auto find=map.find(val);
            if(find!=map.end() && find->second!=i)
            {
                res[0]=i;
                res[1]=find->second;
                break;
            }
        }
        return res;
    }
};