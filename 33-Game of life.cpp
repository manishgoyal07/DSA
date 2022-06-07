/*Problem:  289. Game of Life */
/*-------------------------------------------------------------------------------------*/
// Approach 1 :
int getlivecount(vector<vector<int>>& temp, int i, int j, int m, int n) {
    int livecount = 0;
    if (i > 0) {
        // check the upper neighbour
        if (temp[i - 1][j] == 1) {
            livecount++;
        }
    }
    if (i < m - 1) {
        // check the lower neighbour
        if (temp[i + 1][j] == 1) {
            livecount++;
        }
    }
    if (j > 0) {
        // check the left neighbour
        if (temp[i][j - 1] == 1) {
            livecount++;
        }
    }
    if (j < n - 1) {
        // check the right neighbour
        if (temp[i][j + 1] == 1) {
            livecount++;
        }
    }

    if (i > 0 && j > 0) {
        // check the up-left diagonal neighbour
        if (temp[i - 1][j - 1] == 1) {
            livecount++;
        }
    }
    if (i > 0 && j < n - 1) {
        // check the up-right diagonal neighbour
        if (temp[i - 1][j + 1] == 1) {
            livecount++;
        }
    }
    if (i < m - 1 && j > 0) {
        // check the down-right diagonal neighbour
        if (temp[i + 1][j - 1] == 1) {
            livecount++;
        }
    }
    if (i < m - 1 && j < n - 1) {
        // check the down-left diagonal neighbour
        if (temp[i + 1][j + 1] == 1) {
            livecount++;
        }
    }
    return livecount;
}

void gameOfLife(vector<vector<int>>& board) {
    int m = board.size(), n = board[0].size();
    vector<vector<int>> temp = board;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 1 && getlivecount(temp, i, j, m, n) < 2) {
                // Any live cell with fewer than two live neighbors dies as if
                // caused by under-population.
                board[i][j] = 0;
            }
            else if (board[i][j] == 1 && (getlivecount(temp, i, j, m, n) == 2 ||
                                     getlivecount(temp, i, j, m, n) == 3)) {
                // Any live cell with two or three live neighbors lives on to
                // the next generation.
                continue;
            }
            else if (board[i][j] == 1 && getlivecount(temp, i, j, m, n) > 3) {
                // Any live cell with more than three live neighbors dies, as if
                // by over-population.
                board[i][j] = 0;
            }
            else if (board[i][j] == 0 && getlivecount(temp, i, j, m, n) == 3) {
                // Any dead cell with exactly three live neighbors becomes a
                // live cell, as if by reproduction.
                board[i][j] = 1;
            } else {
                continue;
            }
        }
    }
}
// Time Complexity:  O(M*N)
// Auxillary Space Complexity:  O(M*N)
/*-------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------*/
// Approach  :
int getlivecount(vector<vector<int>>& temp, int i, int j, int m, int n) {
    int livecount = 0;
    if (i > 0) {
        // check the upper neighbour
        if (temp[i - 1][j] == 1 || temp[i - 1][j] == 3) {
            livecount++;
        }
    }
    if (i < m - 1) {
        // check the lower neighbour
        if (temp[i + 1][j] == 1 || temp[i + 1][j] == 3) {
            livecount++;
        }
    }
    if (j > 0) {
        // check the left neighbour
        if (temp[i][j - 1] == 1 || temp[i][j - 1] == 3) {
            livecount++;
        }
    }
    if (j < n - 1) {
        // check the right neighbour
        if (temp[i][j + 1] == 1 || temp[i][j + 1] == 3) {
            livecount++;
        }
    }

    if (i > 0 && j > 0) {
        if (temp[i - 1][j - 1] == 1 || temp[i - 1][j - 1] == 3) {
            livecount++;
        }
    }
    if (i > 0 && j < n - 1) {
        if (temp[i - 1][j + 1] == 1 || temp[i - 1][j + 1] == 3) {
            livecount++;
        }
    }
    if (i < m - 1 && j > 0) {
        if (temp[i + 1][j - 1] == 1 || temp[i + 1][j - 1] == 3) {
            livecount++;
        }
    }
    if (i < m - 1 && j < n - 1) {
        if (temp[i + 1][j + 1] == 1 || temp[i + 1][j + 1] == 3) {
            livecount++;
        }
    }
    return livecount;
}
void gameOfLife(vector<vector<int>>& board) {
    int m = board.size();
    int n = board[0].size();
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 0) {
                // tempently dead
                // can become alive if has exactly three live neighbours
                if (getlivecount(board, i, j, m, n) == 3) {
                    board[i][j] = 2;  // newly alive
                }
            } else if (board[i][j] == 1) {
                //<2 -> die
                //==2 || ==3 live
                //>3 ->die
                if (getlivecount(board, i, j, m, n) < 2 ||
                    getlivecount(board, i, j, m, n) > 3) {
                    board[i][j] = 3;  // newly dead
                }
            }
        }
    }
    // final modifications
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 2)
                board[i][j] = 1;
            else if (board[i][j] == 3)
                board[i][j] = 0;
        }
    }
}
// Time Complexity:  O(M*N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
