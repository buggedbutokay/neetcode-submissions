class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> map;
        int count=0;
        for(int num:nums){
            if(map.contains(num)) return true;
            map.insert(num);
        }
        return false;    
    }
};