class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        for (int row = 0; row < numRows; row++) {
            vector<int> tempLst(row + 1, 1); // Initialize each row with 1
            
            for (int col = 1; col < row; col++) {
                tempLst[col] = ans[row - 1][col - 1] + ans[row - 1][col];
            }
            
            ans.push_back(tempLst);
        }
        
        return ans;
    }
};
