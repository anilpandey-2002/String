class Solution
{
public:
  int compareVersion(string version1, string version2)
  {
    istringstream iss1(version1);
    istringstream iss2(version2);
    int a;
    int b;
    char c;

    while (bool(iss1 >> a) + bool(iss2 >> b))
    {
      if (a < b)
        return -1;
      if (a > b)
        return 1;
      iss1 >> c;
      iss2 >> c;
      a = 0;
      b = 0;
    }

    return 0;
  };
}; // 165
// CompareVersionNumber