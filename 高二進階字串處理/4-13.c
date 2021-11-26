#include <stdio.h>
#include <string.h>

int main() {


    
char s1[1024], s2[1024];
while (scanf("%[^\n]", &s1) && getchar() != EOF) {
    scanf("%[^\n]", &s2);
    getchar();

    printf("讀到 s1=%s\n", s1);
    printf("讀到 s2=%s\n", s2);
}

    // while ((c = getchar()) != EOF) {
    //     scanf("%[^\n]", &s1);
    //     getchar();
    //     scanf("%[^\n]", &s2);
    //     getchar();
    //     printf("讀到 s1=%s\n", s1);
    //     printf("讀到 s2=%s\n", s2);
    // }

    // int n;
    // while (~scanf("%d", &n)) { // 讀取一個整數直到 EOF
    //     printf("讀到 %d\n", n);
    // }

    // while (scanf("%d", &n) != EOF) {
    //     printf("讀到 %d\n", n);
    // }

    return 0;
}