class Solution
{
public:
  string makeFancyString(string s)
  {
    string a;
    for (const char c : s)
      if (a.length() < 2 || a.back() != c || a[a.size() - 2] != c)
        a.push_back(c);
    return a;
  }
};
// Delete Characters to Make Fancy String