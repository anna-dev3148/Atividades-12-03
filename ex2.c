#include <stdio.h>
int main () {
    int num1;
    int num2;
    
    printf("Digite o primeiro número:");
    scanf("%d" , &num1);
    
    printf("Digite o segundo número:");
    scanf("%d" , &num2);
    
    
    printf("%d" , (num1 > num2) ? num1 : num2);
    
    return 0;
}