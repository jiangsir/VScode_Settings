#include <stdio.h>
#include <string.h>
#define LEN 10000

int main() {
    char org[LEN];
    char a[LEN], b[LEN];
    int flag = 0, l, z = 0, x = 0;
    scanf("%[^EOF]", &org);
    for (int i = 0; i < LEN; i++) {
        if (org[i] == '\n') {
            z += 1;
        }
        if (org[i] == '\0') {
            break;
        }
    }
    for (int k = 0; k < (int)((z + 1) / 2); k++) {
        for (int i = 0; i < LEN; i++) {
            if (org[x] == '\n') {
                a[i] = '\0';
                x += 1;
                break;
            }
            a[i] = org[x];
            x += 1;
        }
        for (int i = 0; i < LEN; i++) {
            if (org[x] == '\n') {
                b[i] = '\0';
                x += 1;
                break;
            }
            b[i] = org[x];
            x += 1;
        }
        l = strlen(a);
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < l; j++) {
                if (a[i] == b[j]) {
                    flag += 1;
                    b[j] = '\0';
                    break;
                }
            }
        }
        if (flag == l) {
            printf("Yes\n");
        }
        if (flag != l) {
            printf("No\n");
        }
        flag = 0;
    }
    return 0;
}