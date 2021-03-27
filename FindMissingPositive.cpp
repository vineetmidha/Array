// https://leetcode.com/problems/first-missing-positive/

class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        if (a.size()==0) return 1;
        
        set<int> hash;
        
        int max_element = 0;
        
        bool one = false;
        
        for (auto i: a){
            if (i==1) 
                one = true;
            
            if (i > 0)  {
                hash.insert(i);
                max_element = max(i, max_element);                
            }
        }
        
        if (!one)
            return 1;
        
        int i;
        for (i=2; i<=max_element; i++){
            if (hash.find(i) == hash.end()) return i;
        }
        
        return i;
    }
};

// Solution-2 

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if (nums.size()==0) return 1;
        
        vector<int> result(nums.size()+1);
        
        for (auto i : nums){
            if (i > 0 && i < result.size()){
                result[i] = 1;
            }
        }
        
        for (int i=1; i<result.size(); i++){
            if (result[i] == 0){
                return i;
            }
        }
        
        return result.size();
    }
};

