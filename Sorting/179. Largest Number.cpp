// https://leetcode.com/problems/largest-number/  : Link to the Problem

class Solution {
public:
    static bool comparator(string a, string b)
    {
        return (a+b) > (b+a);
    }
    string largestNumber(vector<int>& nums) {
        vector<string>v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back(to_string(nums[i]));
        }
        sort(v.begin(),v.end(),comparator);
        string str="";
        for(int i=0;i<v.size();i++)
            str+=v[i];
        while(str.size()>1 && str[0]=='0' )
            str.erase(str.begin());
        return str;
    }
};