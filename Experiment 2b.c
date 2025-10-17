/*
Name-Shivam Prajapati
Class-FE CIVIL
division-B
UIN-251C005
roll NO-5
*/
#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int sum=0;
    printf("enter a frist number");
    scanf("%d", &num1);
    scanf("%d", &num2);
    for(int i = num1;i<=num2;i++){
        if (i%2!=0){
            sum += i;
        }
    }
    printf("sum is %d", sum);
    return 0;
}
