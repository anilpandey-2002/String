class Solution
{
public:
  int longestPalindrome(string s)
  {
    int a = 0;
    vector<int> count(128);

    for (const char c : s)
      ++count[c];

    for (const int freq : count)
      a += freq % 2 == 0 ? freq : freq - 1;

    const bool b = ranges::any_of(count, [](int c)
                                  { return c & 1; });
    return a + b;
  }
};
// Longest Palindrome