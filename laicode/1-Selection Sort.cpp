class Solution {
 public:
  vector<int> solve(vector<int> array) {
    // write your solution here
    if (array.size() == 0) return array;
    for (int i = 0; i < array.size() - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < array.size(); j++) {
          if(array[j] < array[min_index])  min_index = j;
        }
        // swap the min index from rest array with current index
        int temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
    }
    return array;
  }
};
// time complexity O(n^2)
