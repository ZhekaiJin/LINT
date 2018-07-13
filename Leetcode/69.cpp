using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        if ( x == 0 ) return 0;
        if ( x == 1 ) return 1;
        long start = 0 ,  end = x / 2;
        while (start + 1 < end) {


            long long  mid = start + (end - start) / 2;

            if ( mid * mid == x) return mid;
            else if (mid * mid > x ) {end = mid;}
            else {start = mid;}
        }
        if (end * end > x) return start;
        return end;
    }
};
//long to avoid overflow beat %99.86
