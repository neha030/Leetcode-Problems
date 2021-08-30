// https://leetcode.com/problems/missing-number/  : Link to the Problem 

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1 = 0, sum2 = 0, cont = 1;
        for(int i : nums){
            sum1 += i;
            sum2 += cont;
            cont++;
        }
        return sum2 - sum1;
    }
};