#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    for (int count = 0;; ++count) {
        if(strs[0][count] == '\0') return strs[0];
        for (int i = 1; i < strsSize; i++) {
            if (strs[i][count] != strs[0][count]) {
                strs[0][count] = '\0';
                return strs[0];
            }
        }
    }
}

int main() {
    // Como minha função reescreve o strs[0], é duplicado minha string
    char* s0 = strdup("flower"); 
    char* s1 = "flow";
    char* s2 = "flight";

    char* strs[] = {s0, s1, s2};
    int strsSize = sizeof(strs) / sizeof(strs[0]);

    char* result = longestCommonPrefix(strs, strsSize);
    printf("Prefixo comum: \"%s\"\n", result);

    free(s0);

    return 0;
}

// Código do strdup para lembrar lógica:

// char* strdup(const char* s) {
//     char* p = malloc(strlen(s) + 1);
//     if (p) strcpy(p, s);
//     return p;
// }