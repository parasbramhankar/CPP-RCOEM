#include <stdio.h>
#include<conio.h>
void decimalToBinary(int decimalNumber) {
    if (decimalNumber == 0) {
        printf("Binary Equivalent: 0\n");
        return;
    }
    int binaryNumber[32];
    int index = 0;
    while (decimalNumber > 0) {
        binaryNumber[index] = decimalNumber % 2;
        decimalNumber /= 2;
        index++;
    }
    printf("Binary Equivalent: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binaryNumber[i]);
    }
    printf("\n");
}
int main() {
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    decimalToBinary(decimalNumber);
    getch ();
}
