#include <stdio.h>
int main()
{
   char name[50];
    int age;
    float gpa;
    char subject[50];
    printf("ชื่อ: ");
    scanf("%s", name);
    printf("อายุ: ");
    scanf("%d", &age);
    printf("GPA: ");
    scanf("%f", &gpa);
    printf("วิชาที่โปรด: ");
    scanf("%s", subject);
    printf("┌────────────┐ \n");
    printf("│ %-10s │\n", name);
    printf("│ %-10d │\n", age);
    printf("│ %-10.2f │\n", gpa);
    printf("│ %-10s │\n", subject);
    printf("└────────────┘ \n");
    return 0;
}