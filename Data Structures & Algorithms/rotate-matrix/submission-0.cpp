class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0 ; i<matrix.size() ; i++){
            for(int j=i ; j<matrix[i].size();j++){
                swap(matrix[j][i],matrix[i][j]);
            }
        }

        for(auto &row : matrix ){
            reverse(row.begin(),row.end());
        }
        
        
    }
};
