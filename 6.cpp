class Solution
{
public:
  int lengthOfLastWord(string s)
  {
    int i = s.length() - 1;

    while (i >= 0 && s[i] == ' ')
      --i;
    const int j = i;
    while (i >= 0 && s[i] != ' ')
      --i;

    return j - i;
  }
}; // 58
// Lengthoflastword