class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // For each row, check for duplicates
        // For each column, check for duplicates
        // For each sub-box, check for duplicates
        
        vector<char> validNums {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
        
        // Check rows
        for (auto& row : board) {
            for (auto& num : validNums) {
                if (count(row.cbegin(), row.cend(), num) > 1) {
                    return false;
                }
            }
        }
        
        // Check columns
        for (int j = 0; j < 9; j++) {
            vector<char> column {};
            for (int i = 0; i < 9; i++) {
                column.push_back(board[i][j]);
            }
            
            for (auto& num : validNums) {
                if (count(column.cbegin(), column.cend(), num) > 1) {
                        return false;
                }
            }
        }
        
        // Check sub-boxes
        for(int i = 0; i < 9; i += 3) { 
	        for(int j = 0; j < 9; j += 3) {
	            vector<char> subBox;
	            for(int k = 0; k < 3; k++) {
	                for(int l = 0; l < 3; l++) {
	                    subBox.push_back(board[i+k][j+l]);
	                }
	            }
                for (auto& num : validNums) {
                    if (count(subBox.cbegin(), subBox.cend(), num) > 1) {
                            return false;
                    }
                }
	        }
    	}
        
        return true;
    }
};