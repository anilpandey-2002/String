class Solution
{
public:
  int minSwaps(string s)
  {

    int a = 0;

    for (const char c : s)
      if (c == '[')
        ++a;
      else if (a > 0)
        --a;

    return (a + 1) / 2;
  }
}; // 1963
// MinNoOfSwap