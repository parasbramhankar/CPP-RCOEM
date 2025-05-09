#include <stdio.h>
void functionA(int n);
void functionB(int n);
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    functionA(num);
    return 0;
}
void functionA(int n) {
    if (n > 0) {
        printf("A%d ", n);
        functionB(n - 1);
    }
}
void functionB(int n) {
    if (n > 0) {
        printf("B%d ", n);
        functionA(n - 1);
    }
}
