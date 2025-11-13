/*Name:Shivam Prajapati
UIN:251C005
roll No: 5
DIV:B
*/
#include<stdio.h>
int main() {
    int arr[5], *p;
    int i;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
}
    p = &arr[4];
    printf("Array elements in reverse order:\n");
    for(i = 4; i >= 0; i--) {
    printf("%d ", *p);
    p--; 
}
    printf("\n");
    return 0;
}
