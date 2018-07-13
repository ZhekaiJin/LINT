class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int i = 1;
        int j = 1;
        while (j < nums.size()) {
            if (nums[j] == nums[i - 1]) {
                j++;
            } else {
                nums[i++] = nums[j++];
            }
        }
        return i;
    }
};
//beat 99.86% speed
