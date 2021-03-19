class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> v;
        for(int i=0;i<nums.size();i++)
        {
            v.insert(nums[i]);
        }
        if(nums.size() > v.size())
            return true ;
        else 
            return false ;
    }
};
