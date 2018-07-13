//2018-6-3 scott
class Solution {
public:
    /**
     * @param nums: An integer array
     * @return: nothing
     */
    void recoverRotatedSortedArray(vector<int> &nums) {
        int x = 0;
        int size = nums.size();
        while (x <= size - 2 && nums[x] <= nums[x + 1]) x++;
        if (x >= size - 1)  return;
        reversesortedarray(nums, 0, size - 1);
        reversesortedarray(nums, 0, size - x - 2);
        reversesortedarray(nums, size - x - 1, size - 1);
    }
    void reversesortedarray(vector<int> & nums, int i, int j){
        for(; i <= j; i++, j--) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
    }
};
