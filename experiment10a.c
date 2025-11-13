/*Name:Shivam Prajapati
UIN:251C005
roll No: 5
DIV:B
*/
#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *p1, *p2;

    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);


    p1 = &num1;
    p2 = &num2;

    
    sum = *p1 + *p2;

    printf("Sum = %d\n", sum);

    return 0;
}
