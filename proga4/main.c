#include <stdio.h>

int main()
{
    // 76 - 78
    // 6
    int num, num2;
    scanf("%d", &num);
    printf((num >= 76 && num<=78) ? "true\n": "false\n");

    scanf(" %o", &num2);
    printf("%d", (num2 & 32) == 0 ? 0:1);
    // 0010 0000
    // 0111 1111 = 127(10) = 177(8)
    // 0101 1111 = 95(10) = 137(8)
}
