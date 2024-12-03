// 1624. Largest Substring Between Two Equal Characters
class Solution
{
public:
    int maxLengthBetweenEqualCharacters(string s)
    {
        int sum = -1;
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = i + 1; j < s.length(); j++)
            {
                if (s[i] == s[j])
                {
                    sum = max(sum, j - i - 1);
                }
            }
        }
        return sum;
    }
};