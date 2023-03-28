class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        vector<bool> temp1(row),temp2(col);
        for(int i=0; i<row; i++){
            temp1[i] = true;
        }
        for(int j=0; j<col; j++){
            temp2[j] = true;
        }
        
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(matrix[i][j] == 0){
                    temp1[i] = temp2[j] = false;
                }
            }
        }
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(temp1[i] == false || temp2[j] == false){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};