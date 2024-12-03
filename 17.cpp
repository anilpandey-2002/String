class Solution
{
public:
  string reversePrefix(string word, char ch)
  {
    reverse(word.begin(), word.begin() + word.find(ch) + 1);
    return word;
  }
}; // 2000
// reversePrefixOfWord