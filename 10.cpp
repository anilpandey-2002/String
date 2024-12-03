class Solution
{
public:
  int maxDepth(string s)
  {
    int a = 0;
    int b = 0;

    for (const char c : s)
      if (c == '(')
        a = max(a, ++b);
      else if (c == ')')
        --b;

    return a;
  }
}; // 1614
// MaxNestDepth