/* Name- Shivam prajapati 
 UIN-251C005
 Roll no-5
 Div-B
 Branch-civil
 */
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    for(i = 1; i < n; i++) {
    if(arr[i] > largest)
    largest = arr[i];
    }

    printf("The largest element is: %d\n", largest);
    return 0;
}
