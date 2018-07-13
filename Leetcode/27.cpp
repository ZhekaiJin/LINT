//slow fast pointer
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int j = 0;
        while (j < nums.size()) {
            if (nums[j] != val) {
                nums[i++] = nums[j++];
            } else {
                j++;
            }
        }
        return i;
    }
};
//beat 99.90% speed
