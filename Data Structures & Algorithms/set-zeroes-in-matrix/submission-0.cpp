class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> tab_n(matrix.size(),-1);
        vector<int> tab_m(matrix[0].size(),-1);
        for(int i=0 ; i<matrix.size();i++){
            for(int j=0 ; j<matrix[i].size();j++){
                if(!matrix[i][j]){
                    tab_n[i]=0;
                    tab_m[j]=0;
                }
            }
        }
        for(int i=0 ; i<matrix.size();i++){
            if(!tab_n[i]){
                for(int &it : matrix[i]) it=0;
                continue;
            }
            for(int j=0 ; j<matrix[i].size();j++)
                if(!tab_m[j]) matrix[i][j]=0;
            
        }
        
    }
};
