class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
     unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> boxes[9];

        for (int i = 0; i < 9; i++) {          // i = row index
            for (int j = 0; j < 9; j++) {      // j = column index
                char digit = board[i][j];

                if (digit == '.') {            // empty cell — skip it, not a real digit to check
                    continue;
                }

                // figure out which of the nine 3x3 boxes this cell belongs to
                int boxIndex = (i / 3) * 3 + (j / 3);

                // check if this digit already exists in this row, this column, or this box
                if (rows[i].count(digit) || cols[j].count(digit) || boxes[boxIndex].count(digit)) {
                    return false;               // duplicate found — invalid board
                }

                // not a duplicate — record this digit in all three trackers
                rows[i].insert(digit);
                cols[j].insert(digit);
                boxes[boxIndex].insert(digit);
            }
        }

        return true;  // made it through every cell with no duplicates found
    }
};
