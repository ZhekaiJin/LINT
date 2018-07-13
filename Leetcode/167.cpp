class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> a{};
        if ( numbers.size() == 0) return a;
        int i = 0;
        int j = numbers.size() - 1;
        while (i < j) {
            long sum = numbers[i] + numbers[j];
            if ( sum == target ) {
                a.push_back(++i);
                a.push_back(++j);
                return a;
            } else if (sum > target) j--;
            else i++;
        }
        return a;
    }
};
//beat 99.91%
