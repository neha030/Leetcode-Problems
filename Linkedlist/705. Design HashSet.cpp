//  https://leetcode.com/problems/design-hashset/  : Link to the Problem 

class MyHashSet {
public:
    /** Initialize your data structure here. */
    #define MAX 1000001
    bool arr[1000001];
    MyHashSet() {
      memset(arr,false,sizeof(arr));  
    }
    
    void add(int key) {
      arr[key]=true;  
    }
    
    void remove(int key) {
        arr[key]=false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
      return arr[key];  
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */