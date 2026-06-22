class Solution {
public:
    int fib(int n) {
        if(n<=1) return n ;

        int n1 = 0 , n2 = 1 ;

        for(int i = 2 ; i<= n ; i++){
            int c = n1 + n2 ;
            n1 = n2 ;
            n2 = c ;
        }
        return n2 ;
    }
};
