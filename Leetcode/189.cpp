class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.size() < 2) return;
        k = k % nums.size();
        rotate_interval(nums, 0, nums.size() - 1);
        rotate_interval(nums, k , nums.size() - 1);
        rotate_interval(nums, 0, k - 1);
    }
    void rotate_interval(vector<int>& nums, int i, int j) {
        while (i < j) {
            int temp = nums[i];
            nums[i++] = nums[j];
            nums[j--] = temp;
        }
    }
};
//beat 100% speed 
