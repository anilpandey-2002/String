// 1542. Find Longest Awesome Substring
class Solution
{
public:
    int longestAwesome(string s)
    {
        int mask = 0;

        map<int, int> mp;
        mp[0] = -1;

        int maxi = 1;

        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            mask ^= (1 << (s[i] - '0'));

            for (int j = 0; j <= 9; j++)
            {
                if (mp.find(mask) != mp.end())
                {
                    maxi = max(i - mp[mask], maxi);
                }

                int odd = mask ^ (1 << j);

                if (mp.find(odd) != mp.end())
                {
                    maxi = max(i - mp[odd], maxi);
                }
            }

            if (mp.find(mask) == mp.end())
            {
                mp[mask] = i;
            }
        }

        return maxi;
    }
};