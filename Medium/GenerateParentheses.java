class Solution {
    List<String> res = new ArrayList<>();

    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if (ch == ')') {
                if (stack.isEmpty()) return false;
                stack.pop();
            } else {
                stack.push(ch);
            }
        }
        return stack.isEmpty();
    }

    public void helper(int n, String s) {
        if (n == 0) {
            if (isValid(s)) {
                res.add(s);
            }
            return;
        }
        helper(n - 1, s + '(');
        helper(n - 1, s + ')');
    }
    
    public List<String> generateParenthesis(int n) {
        helper(n*2, "");
        return res;
    }
}