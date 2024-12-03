class Solution
{
public:
  string makeGood(string s)
  {
    string a;
    for (const char c : s)
      if (!a.empty() && isBadPair(a.back(), c))
        a.pop_back();
      else
        a.push_back(c);
    return a;
  }

  bool isBadPair(char a, char b)
  {
    return a != b && tolower(a) == tolower(b);
  }
}; // 1544
// MakeTheString