class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < board.size(); i++) {
            for(int j = 1; j < board.size(); j++) {
                if(i == j) {
                    return false;
                } else {
                    return true;
                }
            }
        }
    }
};
