class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ve;
        bool flag = false;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    ve.push_back(i);
                    ve.push_back(j);
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        return ve;
    }
};