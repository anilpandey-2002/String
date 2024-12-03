class Solution
{
public:
    long long wonderfulSubstrings(string word)
    {
        long long a = 0, b = 0;
        vector<int> count(1024);
        count[0] = 1;

        for (const char c : word)
        {
            b ^= 1 << (c - 'a');
            a += count[b];
            for (int i = 0; i < 10; ++i)
                a += count[b ^ (1 << i)];
            ++count[b];
        }

        return a;
    }
};
// 1915
//  No.OfWonderfulSubstring