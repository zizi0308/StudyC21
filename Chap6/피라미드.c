/*#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 1; i < 10; i++)                // i = 1, 1 < 10            // i = 2, 2 < 10            // i = 3, 3 < 10                // i = 9, 9 < 10
    {
        for (j = 0; j < 10 - i; j++)        // j = 0, 0 < 10 - 1(9)     // j = 1, 1 < 10 - 2(8)     // j = 2, 2 < 10 - 3(7)         // j = 9, 9 < 10 - 9(1)
        {
            printf(" ");                    // 공백 9개 출력            // 공백 8개 출력            // 공백 7개 출력                // 공백 1개 출력
        }
        for (k = 0; k < i * 2 -1; k++)      // k = 0, k < 1 * 2 - 1(1)  // k = 1, k < 2 * 2 - 1(3)  // k = 2, k < 3 * 2 -1(5)       // k = 9, k < 9 * 2 -1(17)
        {
            printf("*");                    // 별 1개 출력              // 별 3개 출력              // 별 5개 출력                  // 별 17개 출력
        }
        printf("\n");                       // 개행                     // 개행                     // 개행                         // 개행
    }


    return 0;
}*/