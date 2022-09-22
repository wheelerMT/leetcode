class Solution {
public:
    string numberLetters[9] {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    void allCombinations(string digits, int i, vector<string>& currentString, string answer)
    {
        if (i >= digits.length())
        {
            if (answer != "") currentString.push_back(answer);
            return;
        }
        
        for (int j = 0; j < numberLetters[digits[i] - '1'].length(); ++j)
        {
            allCombinations(digits,  i + 1, currentString, answer + numberLetters[digits[i] - '1'][j]);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        
        vector<string> answer {};
        allCombinations(digits, 0, answer, "");
        return answer;
    }
};