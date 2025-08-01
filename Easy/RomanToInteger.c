#include <stdlib.h>
#include <stdio.h>

int charToNum(char a) {
    switch (a) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}


int romanToInt(char* s) {
    int sum = 0;
    int length = strlen(s); // Calculate the length of the string
    for (int i = 0; i < length; i++) {
        if (i + 1 < length && charToNum(s[i]) < charToNum(s[i + 1])) {
            sum -= charToNum(s[i]);
        } else {
            sum += charToNum(s[i]);
        }
    }
    return sum;
}

int main() {
    char* s = "LVIII";

    printf("%d", romanToInt(s));
}