class Solution {
    bool dfs(vector<vector<char>>& board, string word, int row, int col, int i){
        if (row < 0 || row == board.size() || col < 0 || col == board[0].size())
        return false;
        if (board[row][col] != word[i] || board[row][col] == '@') return false;
        if (i == word.length()-1) return true;
        char cache = board[row][col];
        board[row][col] = '@';
        if(
        dfs(board,word,row,col+1,i+1 )||
        dfs(board,word,row,col-1,i+1)||
        dfs(board,word,row+1,col,i+1)||
        dfs(board,word,row-1,col,i+1)
        ) return true;
        board[row][col] = cache;
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        for (int row = 0; row < board.size(); ++row)
            for (int col = 0; col < board[0].size(); ++col)
                if(dfs(board,word,row,col,0)) return true;
        return false;
    }
};
