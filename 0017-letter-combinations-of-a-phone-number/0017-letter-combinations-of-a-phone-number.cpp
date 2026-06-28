class Solution {
public:
   void generate(string& digits, unordered_map<char, string>& digittoalpha,
             vector<string>& result, int idx, string comb) {
        int n = digits.length();
        if (idx == n) {
            result.push_back(comb);
            return;
        }
        string letters = digittoalpha.at(digits[idx]);
        for (char letter : letters) {
            generate(digits, digittoalpha, result, idx + 1, comb + letter);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.empty())
            return result;
        unordered_map<char, string> digittoalpha = {
            {'2', "abc"}, {'3', "def"},  {'4', "ghi"},  {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
        generate(digits, digittoalpha, result, 0, "");
        return result;
    }
};