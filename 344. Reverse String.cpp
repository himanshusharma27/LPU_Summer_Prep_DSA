class Solution {
public:
    void reverseString(vector<char>& s) {
        
        stack<char>himanshu;

        for(char c : s){
            himanshu.push(c);
        }

        int i = 0 ;

        while(!himanshu.empty()){
            s[i++] = himanshu.top();
            himanshu.pop();
        }

    }
};
