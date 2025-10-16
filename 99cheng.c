#include <stdio.h>
int main() {
    // 外层循环控制行数
    for (int i = 1; i <= 9; i++) {
        // 内层循环控制每行的列数
        for (int j = 1; j <= i; j++) {
            // 输出乘法表达式及结果
            printf("%d * %d = %d\t", j, i, j * i);
        }
        // 每行结束后换行
        printf("\n");
    }
    return 0;
}