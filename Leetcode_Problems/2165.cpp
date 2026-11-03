class Solution {
public:
    long long smallestNumber(long long num) {

        string s = to_string(num);

        if (num < 0) {
            sort(s.begin() + 1, s.end(), greater<char>());
        }
        else {
            sort(s.begin(), s.end());

            int i = 0;

            while (i < s.size() && s[i] == '0') {
                i++;
            }

            if (i < s.size()) {
                swap(s[0], s[i]);
            }
        }

        return stoll(s);
    }
};