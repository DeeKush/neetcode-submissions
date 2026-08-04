class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> box(9), row(9), col(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                int val = board[i][j];
                if(val == '.')continue;
                int boxInd = (i/3)*3 + (j/3);
                if(row[i].count(val) || col[j].count(val) || box[boxInd].count(val)){
                    return false;
                }

                row[i].insert(val);
                col[j].insert(val);
                box[boxInd].insert(val);
            }
        }
        return true;
    }
};
