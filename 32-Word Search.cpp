// 79. Word Search
bool search(vector<vector<char>>& board, int i, int j, string& word)
    {
        if(word.size() == 0) 
            return true;
        if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[0])
            return false;
        
        char ch = board[i][j];
        board[i][j] = '*';
        string s = word.substr(1);
        bool res = (search(board, i-1, j, s)||
                    search(board, i+1, j, s)||
                    search(board, i, j-1, s)||
                    search(board, i, j+1, s));
        
        board[i][j] = ch;
        return res;
    }
    
    bool exist(vector<vector<char>>& board, string word) 
    {
        int m = board.size();
        int n = board[0].size();
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(search(board, i, j, word))
                    return true;
            }
        }
        
        return false;
    }