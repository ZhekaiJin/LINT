class Solution {
    public:
        /*
         * @para n: A long long integer
         * @return: trailing zero in n!
         */
        long long trailingZeros(long long n) {
            long long count = 0;
            while(n > 0) {
                n /= 5;
                count += n;// 5 is always less than 2
             }
            return count;
        }
};
