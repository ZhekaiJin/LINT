using namespace std;
class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num <= 0) return false;
        if (num == 1) return true;
        int start = 0 , end = num / 2;
        while (start + 1 < end) {
            long long  mid = start + (end - start) / 2; // long long to avoid overflow
            // cout << "mid: " << mid << " start: " << start << " end: " << end <<endl;
            // cout << "mid * mid: " << mid * mid << endl;


            if (num == mid * mid) {
                return true;
            } else if ((mid * mid) < num) {
                start = mid;
            } else {
                end = mid;
            }
        }
        if (num == start * start || num == end * end) return true;
        return false;
    }
};
//beat 100%
