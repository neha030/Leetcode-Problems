// https://leetcode.com/problems/third-maximum-number/ : Link to the Problem

class Solution {
public:
    int thirdMax(vector<int>& nums) {
      long long fm=LONG_MIN,sm=LONG_MIN,tm=LONG_MIN;
        
        for (auto x:nums)
        {
            if (x>fm )
            {
                tm=sm;
                sm=fm;
                fm=x;
            }
            else if (x> sm && x<fm)
            {
                tm=sm;
                sm=x;
            }
            else if (x> tm && x<sm)
                tm=x;
        }
        return (tm==LONG_MIN)?fm:tm;
    }
};