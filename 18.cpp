class Solution
{
public:
  string reverseVowels(string s)
  {
    int a = 0;
    int b = s.length() - 1;

    while (a < b)
    {
      while (a < b && !isVowel(s[a]))
        ++a;
      while (a < b && !isVowel(s[b]))
        --b;
      swap(s[a++], s[b--]);
    }

    return s;
  }

private:
  bool isVowel(char c)
  {
    static constexpr string_view kVowels = "aeiouAEIOU";
    return kVowels.find(c) != string_view::npos;
  }
}; // 345
// Reversevowelofstring