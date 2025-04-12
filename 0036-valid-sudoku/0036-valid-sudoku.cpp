class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // row
        for (int i=0;i<board.size();i++) {
            int arr[10]={};
            for (int j=0;j<board[i].size();j++) {
            if (board[i][j]!='.')
                // cout<<board[i][j]-'0'<<" ";
                arr[board[i][j]-'0']++;
            }
            for (int j=0;j<10;j++) {
                if(arr[j]>=2) {
                    return false;
                }
            }
        }
        // column
        for (int i=0;i<board.size();i++) {
            int arr[10]={};
            for (int j=0;j<board[i].size();j++) {
                if (board[j][i]!='.')
                    arr[board[j][i]-'0']++;
            }
            for (int j=0;j<10;j++) {
                if(arr[j]>=2) {
                    return false;
                }
            }
        }
        // check 3x3 grid
        for (int all = 0; all < board.size(); all++) {
            int arr[10]={};
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int row = (all / 3) * 3 + i;
                    int col = (all % 3) * 3 + j;
                    if (board[row][col] != '.')
                        arr[board[row][col]-'0']++;
                }
            }
            for (int j=0;j<10;j++) {
                if(arr[j]>=2) {
                    return false;
                }
            }
        }
        return true;
    }
};