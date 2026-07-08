class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0 ;

        for(int i = 0 ; i<n ; i++){
            sum+= mat[i][i]; // Primary 
            sum+= mat[i][n-1-i]; // secondary 
            }

            if(n%2==1){
                sum-=mat[n/2][n/2];  // Remove middle of the element
            }  
        
        return sum ; // sum 
    }
};
