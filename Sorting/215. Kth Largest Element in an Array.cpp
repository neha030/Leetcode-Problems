// https://leetcode.com/problems/kth-largest-element-in-an-array/  : Link to the problem 

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
     priority_queue<int, vector<int>, greater<int>> minHeap;
        for(int i = 0 ; i < k ; i++)  //min heap of first k items
            minHeap.push(nums[i]);
        for(int i = k ; i < nums.size() ; i++){ // min heap stores the k largest elements encountered so far
            if (minHeap.top() > nums[i])
                continue;
            else {
                minHeap.pop();
                minHeap.push(nums[i]);
            }
        }
        return minHeap.top();   
    }
};