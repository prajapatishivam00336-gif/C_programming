1 /* Name- Shivam prajapati
2 Class-FE civil
3 division-B
4 UIN-2510005
5 roll NO-5 */
6 
7 #include<stdio.h>
8 int main()
9 {
10     int physics;
11     printf("enter your marks");
12     scanf("%d", &physics);
13 
14     int math;
15     printf("enter your marks");
16     scanf("%d", &math);
17 
18     int chemistry;
19     printf("enter your marks");
20     scanf("%d", &chemistry);
21 
22     int sum;
23     float avg;
24     sum = physics + math + chemistry;
25     avg = (float)sum/3;
26     printf("sum is %d and avg is %f \n", sum, avg);
27 
28     if (avg >= 50) {
29         printf("\n you are eligible to admission.");
30     }
31     else {
32         printf("\n you are not eligible to admission.");
33     }
34 
35     return 0;
36 }
