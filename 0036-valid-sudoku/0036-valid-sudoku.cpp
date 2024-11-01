class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>ro[9];
        unordered_set<char>co[9];
        unordered_set<char>box[9];
        for(int r=0;r<9;++r){
            for(int c=0;c<9;++c){
                if(board[r][c]=='.') continue;
                char val=board[r][c];
                int bi=(r/3)*3+(c/3);
                if(ro[r].count(val)||co[c].count(val)||box[bi].count(val)) return false;
                ro[r].insert(val);
                co[c].insert(val);
                box[bi].insert(val);
            }
        }
        return true;
    }
};