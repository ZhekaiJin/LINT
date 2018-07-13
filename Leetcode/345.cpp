

class Solution {
private:
    std::unordered_set<char> vowels = { 'a', 'e', 'i', 'o', 'u','A', 'E', 'I', 'O', 'U' };
    void swapchar (string& s, int i, int j) {
         char temp = s.at(j);
         s.at(j) =  s.at(i);
         s.at(i) = temp;
    };
public:
    string reverseVowels(string s) {
        if (s.length() <= 1) return s;
        int i = 0, j = s.length() - 1;
        while (i < j) {
            if (vowels.count(s.at(i)) < 1) {
                i++;
            }

            if (vowels.count(s.at(j)) < 1) {
                j--;
            }

            if(vowels.count(s.at(i)) && vowels.count(s.at(j))) swapchar (s, i++, j--);
        }
        return s;
    }
};
//beat 81.50%
