class Solution {
 public:
  long fibonacci(int K) {
    // write your solution here
    if (K <= 0) return 0;
//     else if (K == 2 || K == 1) return 1;
//     return fibonacci(K - 1) + fibonacci(K - 2);
    long a = 0, b = 1;
    while (K-- > 1) {
      long temp = b;
      b += a;
      a = temp;
    } 
    return b;
  }
};
