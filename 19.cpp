class Solution
{
public
  String smallestFromLeaf(TreeNode root)
  {
    dfs(root, new StringBuilder());
    return a;
  }

private
  String a = null;

private
  void dfs(TreeNode root, StringBuilder b)
  {
    if (root == null)
      return;

    b.append((char)(root.val + 'a'));

    if (root.left == null && root.right == null)
    {
      final String c = b.reverse().toString();
      b.reverse();
      if (a == null || a.compareTo(c) > 0)
        a = c;
    }

    dfs(root.left, b);
    dfs(root.right, b);
    b.deleteCharAt(b.length() - 1);
  }
} // 988
// SmallestString