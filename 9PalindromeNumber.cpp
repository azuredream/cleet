class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) {
            return false;
        } else if(x < 10) {
            return true;
        }
        int orix = x;
        long long int a = 0;
        while(x) {
            a = a*10 + x%10;
            x = x/10;
        }
        return orix == (int)a;
    }
};