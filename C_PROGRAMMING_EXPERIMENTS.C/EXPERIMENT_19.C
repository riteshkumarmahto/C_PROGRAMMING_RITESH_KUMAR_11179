#include <stdio.h>
#include <string.h>

int main() {
    char a[36], b[36];

    printf("%lu\n", strlen(a));
    strcpy(a,b);
    strcat(a,b);
    printf("%s\n", a);
    printf("%d", strcmp(a,b));

    return 0;
}