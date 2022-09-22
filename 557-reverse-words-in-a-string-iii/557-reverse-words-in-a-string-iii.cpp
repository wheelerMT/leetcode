class Solution {
public:
    string reverseWords(string s) {
        string reversed {};
        string currentWord {};
        for (auto& character : s)
        {
            if (!isspace(character))
            {
                currentWord += character;
            }
            else
            {
                reversed += reverseWord(currentWord) + " ";
                currentWord = "";
            }
        }
        
        return reversed + reverseWord(currentWord);
    }
    
    string reverseWord(string word)
    {
        string reversedWord {};
        for (int i = word.length() - 1; i >= 0; --i)
        {
            reversedWord += word[i];
        }
        
        return reversedWord;
    }
};