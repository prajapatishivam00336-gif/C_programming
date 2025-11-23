/* Name- Shivam prajapati 
 UIN-251C005
 Roll no-5
 Div-B
 Branch-civil
 */
#include <stdio.h>
#include <stdlib.h>

struct Employee {
 int id;
 char name[50];
 float salary;
};
void addEmployee() {
    FILE *fp = fopen("employee.txt", "a");
    struct Employee e;

    printf("\nEnter Employee ID: ");
    scanf("%d", &e.id);
    printf("Enter Employee Name: ");
    scanf("%s", e.name);
    printf("Enter Salary: ");
    scanf("%f", &e.salary);
    fprintf(fp, "%d %s %.2f\n", e.id, e.name, e.salary);
    fclose(fp);
    printf("\nEmployee added successfully!\n");
}
void displayEmployees() {
    FILE *fp = fopen("employee.txt", "r");
    struct Employee e;
    if (fp == NULL) {
    printf("\nNo employee records found!\n");
    return;
    }
    printf("\n--- Employee Records ---\n");
    while (fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary) != EOF) {
        printf("ID: %d\tName: %s\tSalary: %.2f\n", e.id, e.name, e.salary);
    }
    fclose(fp);
}
void searchEmployee() {
    FILE *fp = fopen("employee.txt", "r");
    struct Employee e;
    int id, found = 0;

    if (fp == NULL) {
    printf("\nNo records found!\n");
    return;
    }
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);
    while (fscanf(fp, "%d %s %f", &e.id, e.name, &e.salary) != EOF)
    { if (e.id == id) {
    printf("\nRecord Found:\n");
    printf("ID: %d\nName: %s\nSalary: %.2f\n", e.id, e.name, e.salary);
    found = 1;
    break;
    }
    }
    if (!found) {
    printf("\nEmployee not found!\n");
    }
    fclose(fp);
}
int main() {
    int choice;
    while (1) {
        printf("\n--- Employee Database Menu ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
    case 1: addEmployee(); break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee(); break;
            case 4: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
