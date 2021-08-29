// https://leetcode.com/problems/valid-anagram/  : Link to the Problem 

class Solution {
public:
    bool isAnagram(string s, string t) {
        int smp[26]={0} , tmp[26]={0};
        if(s.size()!=t.size())
            return false;
        for(int i=0;i<s.size();i++)
        {
            smp[s[i]-'a']++;
              tmp[t[i]-'a']++;
        }
        
         for(int i=0;i<26;i++)
        {
          if(smp[i]!=tmp[i])
              return false;
        }
        return true;
    }
};