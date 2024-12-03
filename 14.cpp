class Solution
{
public:
  int numSteps(string s)
  {
    int a = 0;
    while (s.back() == '0')
    {
      s.pop_back();
      ++a;
    }
    if (s == "1")
      return a;
    ++a;
    for (const char c : s)
      a += c == '1' ? 1 : 2;

    return a;
  }
};
// Number of Steps to Reduce a Number in Binary Representation to One