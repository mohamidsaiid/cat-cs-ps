// https://leetcode.com/problems/fibonacci-number/
class Solution {
public:
    int f(int n)
    {   
        if(n < 2) return 1;   
        return f(n-1) + f(n-2);    
    }
    int fib(int n) {
        if(n == 0) return 0;
        return f(n-1);
    }
};
