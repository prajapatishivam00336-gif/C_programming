/* Name-Shivam Prajapati
Class-FE civil
division-B
UIN-251C005
roll NO-5
*/
#include <stdio.h>

int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    if(num%2==0) {
        printf("%d number is even", num);
    }
    else{
        printf("%d number is odd", num);
    }
    return 0;
}
