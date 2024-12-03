class Solution
{
public:
  int appendCharacters(string s, string t)
  {
    int a = 0;

    for (const char c : s)
      if (c == t[a])
        if (++a == t.length())
          return 0;

    return t.length() - a;
  }
};
// 2486
//  Append Characters to String to Make Subsequence