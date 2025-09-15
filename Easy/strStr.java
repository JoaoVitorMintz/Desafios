class Solution {
    public int strStr(String haystack, String needle) {

        for (int i = 0; i < haystack.length() - needle.length() + 1; i++) {
            int qtd = 0;

            if (haystack.charAt(i) == needle.charAt(0)) {
                for (int j = 0; j < needle.length(); j++) {
                    if (haystack.charAt(i + j) == needle.charAt(j)) {
                        qtd++;
                    } else {
                        break;
                    }
                }
            }
            if (qtd == needle.length()) return i;
        }
        return -1;
    }
}
