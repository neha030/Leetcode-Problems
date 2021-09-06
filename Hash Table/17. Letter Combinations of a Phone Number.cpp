//  https://leetcode.com/problems/letter-combinations-of-a-phone-number/ : Link to the Problem

class Solution {
public:
     vector<string>ans;
        int n;
          void func(string& s,int pos,string& build,vector<string>&chars){
              if(pos==n)
              {
                  ans.push_back(build);
                  return ;
              }
               int d=s[pos]-'0';
        for(auto x:chars[d]){
            string now=build+x;
            func(s,pos+1,now,chars);
        }
          }
    vector<string> letterCombinations(string digits) {
      n=digits.length();
        if(n==0) return {};
        vector<string>chars(10);
        chars[0]="0";
        chars[1]="1";
        chars[2]="abc";
        chars[3]="def";
        chars[4]="ghi";
        chars[5]="jkl";
        chars[6]="mno";
        chars[7]="pqrs";
        chars[8]="tuv";
        chars[9]="wxyz";
        string build="";
        func(digits,0,build,chars);
        return ans;
        
    }
};