class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         map<int,int> mp;
        vector<int> res;
        vector<pair<int , int>>ve;
        set<int> st;
        for ( int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
    }
        for (auto pair : mp)
        {
            ve.push_back(pair);
        }
        sort(ve.begin(), ve.end(), [](const pair<int, int>& x, const pair<int, int>& y) {
            return x.second > y.second;
        });
        int i=1;
        for (auto it:ve) {
            if (i<=k)
                res.push_back(it.first);
            i++;
        }
        return res;
    }
};