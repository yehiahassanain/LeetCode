class Solution {
public:
  vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>res(temperatures.size(),0);
        stack<pair<int,int>>storage;
        storage.push({temperatures[0],0});
        for (int i=1;i<temperatures.size();i++) {
            if (!storage.empty()) {
                while (temperatures[i] > storage.top().first) {
                    res[storage.top().second] = i-storage.top().second;
                    storage.pop();
                    if (storage.empty())
                        break;
                }
            }
                storage.push({temperatures[i],i});
        }
        return res;
    }
};