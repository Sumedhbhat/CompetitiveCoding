/*
 * @lc app=leetcode id=380 lang=cpp
 *
 * [380] Insert Delete GetRandom O(1)
 */

// @lc code=start
class RandomizedSet {
        map<int,bool> present;
public:
    RandomizedSet() {
        map<int,bool> present;
        this->present=present;
    }
    
    bool insert(int val) {
       if(present[val]==true) return false;
        present[val]=true;
        return true;
    }
    
    bool remove(int val) {
       if(present[val]==false){
          present.erase(val);
         return false;  
       } 
        present.erase(val);
        return true;
    }
    
    int getRandom() {
       int i=rand()%present.size(); 
        map<int,bool>::iterator it=present.begin();
        advance(it,i);
        return (it)->first;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
// @lc code=end

