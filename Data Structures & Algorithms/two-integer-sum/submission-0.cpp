class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        
        int complement;
        for(int i =0;i<nums.size();i++){
            complement = target - nums[i];
        
        if (mp.find(complement)!=mp.end()) return {mp[complement],i};
        else{
            mp[nums[i]]=i;
            }
        
    }
    return {};
    }
};
