// https://leetcode.com/problems/happy-number/ : Link to the problem 

class Solution {
public:
    bool isHappy(int n) {
        map<int,bool>visited;
        int num,sum;
         while (n != 1) {
            if (visited[n]) {
                return false;
            }
            visited[n] = true;
      num = n;
            sum = 0;
            while (num != 0) {
                sum += (num % 10) * (num % 10);
                num /= 10;
            }
            n = sum;
        }
        return true;  
    }
};