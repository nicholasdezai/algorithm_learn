#include <stdio.h>

// 打印移动操作
void move(char from, char to, char color) {
    printf("Move %c disk from %c to %c\n", color, from, to);
}

// 递归解决汉诺塔问题
void hanoi(int n, char from, char to, char aux, char color) {
    if (n == 1) {
        move(from, to, color);
        return;
    }
    hanoi(n - 1, from, aux, to, color);
    move(from, to, color);
    hanoi(n - 1, aux, to, from, color);
}

// 解决双色汉诺塔问题
void twoColorHanoi(int n) {
    // 先移动所有红色盘子
    hanoi(n, 'A', 'B', 'C', 'R');
    // 再移动所有蓝色盘子
    hanoi(n, 'A', 'C', 'B', 'B');
}

int main() {
    int n;
    printf("Enter the number of disks of each color: ");
    scanf("%d", &n);

    printf("Steps to solve the two-color Hanoi tower:\n");
    twoColorHanoi(n);

    return 0;
}
