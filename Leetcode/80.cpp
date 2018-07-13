//beat 100% speed
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int i = 1; //slow pointer
        int j = 1; //fast pointer
        while (j < nums.size()) {
            bool one_dup_flag = true;
            if (nums[j] == nums[i - 1]) {
                while (nums[j] == nums[i - 1]) {
                    if (one_dup_flag) nums[i++] = nums[j];
                    one_dup_flag = false;
                    j++;
                }
            } else {
              nums[i++] = nums[j++];
            }
        }
        return i;
    }
};
