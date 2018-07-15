class Solution {
 public:
  int binarySearch(vector<int> array, int target) {
    // write your solution here
    if (array.size() == 0) return -1;
    int start = 0;
    int end = array.size() - 1;
    while (start + 1 < end) {
      int mid = start + (end - start) / 2;
      if (array[mid] == target) return mid;
      else if (array[mid] > target) end = mid;
      else start = mid;
    }
    if (array[start] == target) return start;
    if (array[end] == target) return end;
    return -1;
  }
};
