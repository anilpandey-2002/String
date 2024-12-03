class Solution
{
public:
    string compressedString(string word)
    {
        string a;
        for (int i = 0; i < word.size();)
        {
            int count = 1;
            while (count < 9 && i + count < word.size() && word[i + count] == word[i])
                ++count;
            a += to_string(count) + word[i];
            i += count;
        }
        return a;
    }
};
// 163. String Compression III