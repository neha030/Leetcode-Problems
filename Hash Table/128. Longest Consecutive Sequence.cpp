// https://leetcode.com/problems/longest-consecutive-sequence/ : Link to the Problem

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      set<int>hashSet;
        for(int num : nums)
        {
            hashSet.insert(num);
        }
        int longg=0;
        for(int num : nums)
        {
           if(!hashSet.count(num-1))
           {
               int curr=num;
               int temp=1;
               while(hashSet.count(curr+1))
               {
                   curr+=1;
                   temp+=1;
               }
               longg=max(longg,temp);
           }
        }
        return longg;
    }
};