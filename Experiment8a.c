/* Name- Shivam prajapati 
 UIN-251C005
 Roll no-5
 Div-B
 Branch-civil
 */
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    gets(str);  

    for(i = 0; str[i] != '\0'; i++) {
    length++;
    }

    printf("Length of the string = %d\n", length);
    return 0;
}
