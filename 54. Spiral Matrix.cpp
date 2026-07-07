class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans ;
        int top = 0 ;
        int bottom = matrix.size()-1;
        int left = 0 ;
        int right = matrix[0].size()-1;

        while(top<=bottom && left <= right){ // left to right 
            for(int i = left ; i<=right ; i++){
                ans.push_back(matrix[top][i]);// (0,0) , (0,1), (0,2)
            }
            top++;

            for(int i = top ; i<=bottom ; i++){ // top to bottom 
                ans.push_back(matrix[i][right]);
            }
            right--;

            if(top<=bottom){ // Right to left 
                for(int i = right ; i>=left ; i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if(left<=right){ // Bottom to up
                for(int i = bottom ; i>=top ; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans ;

    }
};
