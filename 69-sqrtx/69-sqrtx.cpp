class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        
        long long count {};
        long long product {};
        while (product <= x)
        {
            ++count;
            product = count * count;
        }
        
        return (int)(count - 1);
    }
};