#include <stdio.h> 

int main() {
    char str[] = "apple";
    int hash[26] = {0};
  
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        int index = ch - 'a';
        hash[index]++;
    }

    for (int i = 0; i < 26; i++) {
        if (hash[i] > 0) {
            printf("%c occurs %d times\n", 'a' + i, hash[i]);
        }
    }

    return 0;
}