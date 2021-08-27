//  https://leetcode.com/problems/contains-duplicate/ : Link to the Problem

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++)
        {
           map[nums[i]]++; 
        }
        for(auto x : map )
        {
            if(x.second>=2)
                return true;
        }
        return false;
    }
};