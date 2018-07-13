class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if (nums.size() == 0 ) return 1;
       int j = 0;
      std::cout << "nums.size() = " << nums.size()<< std::endl;

       while (j < nums.size()) {
           std::cout << "j_in =" << j << std::endl;
           while(nums[j] != (j + 1) && nums[j] <= nums.size() && nums[j] > 0) {
               //nums[i] should = i + 1 ===> nums j should be at index nums[j] - 1
               int pos_to_swap = nums[j] - 1;
               if (nums[pos_to_swap] == pos_to_swap + 1) {
                   break;
               }; //why we need this ?????
               nums[j] = nums[pos_to_swap];
               nums[pos_to_swap] = pos_to_swap + 1;
           }
           j++;
       }

       int index = 0;
       while (index < nums.size()){
           if(nums[index] != index + 1) break;
           index++;
       }
       return ++index;
    }
};
//beat 30% speed 
