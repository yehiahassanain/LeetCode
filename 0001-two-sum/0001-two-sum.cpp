class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
map<int,int>mp;
        vector<int>res;
        for (int i=0;i<nums.size();i++){
            mp.insert({nums[i],i});
        }
        for (int i=0;i<nums.size();i++){
            int val = target - nums[i];
            auto sec_num = *mp.find(val);
            if (mp.find(val)!=mp.end()&&i!=sec_num.second){
                res.push_back(i);
                res.push_back(sec_num.second);
                break;
            }
        }
        return res;
    }
};