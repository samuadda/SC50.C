#include <stdio.h>
#include <string.h>

void decode_ascii(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        str[i] = str[i] - 1;
    }
    printf("Decoded message: %s\n", str);
}

int main() {
    char message[100];
    printf("Enter the encoded message: ");
    scanf("%s", message);
    decode_ascii(message);
    return 0;
}


