using namespace std;
class Solution {
public:
    bool judgeSquareSum(int c) {
        int i = 0;
        int j = sqrt (c);
        while ( i <= j ) { // need to allow equal for i^2 + j ^2
            auto a = i * i + j * j;
            if (a == c) return true;
            else if (a >c) {j--;}
            else {i++;}
        }
        return false;
    }
};
//beat 100%
