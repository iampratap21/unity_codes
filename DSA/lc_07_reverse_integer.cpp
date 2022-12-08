/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
*/

class Solution {
public:
    int reverse(int x) {
        int y = abs(x);
        y = reverse1(y);
        if(y==-1) return 0;
        if(x<0) return -1*y;
        return y;
    }
    int reverse1(int a) {
        long rev = 0;
        while(a) {
            int ld = a%10;
            if(rev > INT_MAX/10 || rev < INT_MIN/10) return -1;
            rev = rev*10 + ld;
            a /= 10;
        }
        return rev;
    }
    
};