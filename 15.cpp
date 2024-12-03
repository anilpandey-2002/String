class Solution
{
public
  int openLock(String[] deadends, String target)
  {
    Set<String> a = new HashSet<>(Arrays.asList(deadends));
    if (a.contains("0000"))
      return -1;
    if (target.equals("0000"))
      return 0;

    int b = 0;
    Queue<String> c = new ArrayDeque<>(Arrays.asList("0000"));

    while (!c.isEmpty())
    {
      ++b;
      for (int d = c.size(); d > 0; --d)
      {
        StringBuilder e = new StringBuilder(c.poll());
        for (int i = 0; i < 4; ++i)
        {
          final char cache = e.charAt(i);

          e.setCharAt(i, e.charAt(i) == '9' ? '0' : (char)(e.charAt(i) + 1));
          String word = e.toString();
          if (word.equals(target))
            return b;
          if (!a.contains(word))
          {
            c.offer(word);
            a.add(word);
          }
          e.setCharAt(i, cache);

          e.setCharAt(i, e.charAt(i) == '0' ? '9' : (char)(e.charAt(i) - 1));
          word = e.toString();
          if (word.equals(target))
            return b;
          if (!a.contains(word))
          {
            c.offer(word);
            a.add(word);
          }
          e.setCharAt(i, cache);
        }
      }
    }

    return -1;
  }
} // 752
// OpenTheLock