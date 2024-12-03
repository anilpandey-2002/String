class Solution
{
public:
    string addSpaces(string s, vector<int> &spaces)
    {
        string a = "";
        for (int i = 0, j = 0; i < s.size(); ++i)
        {
            if (j < spaces.size() && i == spaces[j])
            {
                a += ' ';
                ++j;
            }
            a += s[i];
        }
        return a;
    }
};
// 2109. Adding Spaces to a String