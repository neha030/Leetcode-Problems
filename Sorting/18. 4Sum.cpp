// Link to the Problem :  https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         sort(nums.begin(),nums.end());
        
        int n=nums.size();
        
        vector<vector<int>> ans;
        
        
        if(nums.size()<4) return ans;
        else if(nums.size()==4){
            int temp=0;
            
            for(auto x: nums){
                temp+=x;
            }
            
            if(temp==target){
                ans.push_back(nums);
                return ans;
            }
            else{
                return ans;
            }
        }
        
        
        for(int i=0;i<n - 3;i++){
          
           if(i==0 ||  nums[i]!=nums[i-1]){
            for(int j=i + 1;j<n-2; j++){
                
              
                if(j==i + 1 || nums[j]!=nums[j - 1]){
                    
                int l=j+1;
                int r=n-1;
                
                while(r>l){
                    
                    int temp_sum = nums[i] + nums[j] + nums[l] + nums[r];
                    
                    if(target == temp_sum ){
                        vector<int> t;
                        t.push_back(nums[i]);
                        t.push_back(nums[j]);
                        t.push_back(nums[l]);
                        t.push_back(nums[r]);
                   
                        ans.push_back(t);
                      
                        
                        while(l<r and nums[l]==nums[l+1]){
                            l++;
                        }
                        
                        while(r>l and nums[r]==nums[r - 1]){
                            r--;
                        }
                        l++;
                        r--;
                    }
                    else if(target>temp_sum){
                        l++;
                    }
                    else if(target<temp_sum){
                        r--;
                    }
                }
                }
               
            }
           }
        
        }
        
        return ans;
    }
};
