class Solution {
public:
    void backtrck (int Open,int Close,vector<string>& res,string cur_ans,int n) {
        if (Open == Close &&Open == n) {
            res.push_back(cur_ans);
            return;
        }
        if (Open < n) {
            cur_ans += "(";
            backtrck(Open+1,Close,res,cur_ans,n);
            cur_ans.pop_back();
        }
        if (Close < Open) {
            cur_ans += ")";
            backtrck(Open,Close+1,res,cur_ans,n);
            cur_ans.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string cur_ans = "";
        backtrck(0,0,res,cur_ans,n);
        return res;
    }
};
