class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_set<string> seen;

        for(int r = 0; r < 9; r++){

            for(int c = 0; c < 9; c++){

                char num = board[r][c];

                if(num == '.') continue;

                string row = string(1, num) + "row" +  to_string(r);
                string col = string(1, num) + "col" +  to_string(c);

                int boxIndex = (r/3) * 3 + (c/3);

                string box = string(1, num) + "box" + to_string(boxIndex);

                if(seen.count(row) || seen.count(col) || seen.count(box)){
                    return false;
                }

                seen.insert(row);
                seen.insert(col);
                seen.insert(box);
            }

        }
        return true;
    }
};
