1 /* Name- Shivam Prajapati
2 Class-FE Civil
3 Division-B
4 UIN-2510005
5 roll No-5
6 */
7 #include <stdio.h>
8 int main() {
9 int choice;
10 float a, b, result;
11 menu:
12 printf("\n---Simple Calculator ---\n");
13 printf("1. Addition\n");
14 printf("2. Subtraction\n");
15 printf("3. Multiplication\n");
16 printf("4. Division\n");
17 printf("5. Exit\n");
18 printf("Enter your choice: ");
19 scanf("%d", &choice);
20 printf("Enter first number: ");
21 scanf("%f", &a);
22 printf("Enter second number: ");
23 scanf("%f", &b);
24 switch (choice) {
25 case 1:
26 result = a + b;
27 printf("Result = %.2f\n", result);
28 break;
29 case 2:
30 result = a - b;
31 printf("Result = %.2f\n", result);
32 break;
33 case 3:
34 result = a * b;
35 printf("Result = %.2f\n", result);
36 break;
37 case 4:
38 if (b == 0)
39 printf("Error! Division by zero.\n");
40 else
41 result = a / b;
42 printf("Result = %.2f\n", result);
43 break;
44 default:
45 printf("Invalid choice!\n");
46 }
47 goto menu;
48 }
