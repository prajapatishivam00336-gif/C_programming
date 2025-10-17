1/ Name-Shivam Prajapati
2 Class-FE civil
3 division-B
4 UIN-2510005
5 roll NO-5
6 */
7 #include <stdio.h>
8
9 int isPrime(int num) {
10
    if (num <= 1) {
11
        return 0;
12
    }
13
    for (int i = 2; i * i <= num; i++) {
14
        if (num % i == 0) {
15
            return 0;
16
        }
17
    }
18
    return 1;
19 }
20
21 int main() {
22
    int start, end;
23
24
    printf("Enter the starting number: ");
25
    scanf("%d", &start);
26
27
    printf("Enter the ending number: ");
28
    scanf("%d", &end);
29
30
    printf("Prime numbers between %d and %d are: ", start, end);
31
32
    for (int i = start; i <= end; i++) {
33
        if (isPrime(i)) {
34
            printf("%d ", i);
35
        }
36
    }
37
38
    printf("\n");
39
    return 0;
40 }
41
