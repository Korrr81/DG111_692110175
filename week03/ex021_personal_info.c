#include <stdio.h>
int main()
{
   char name[50];
   int age;
   float gpa;
   char subject[50];
   printf("=== ป้อนข้อมูล===\n");
   printf("ชื่อ: ");
   scanf("%s", name);
   printf("อายุ: ");
   scanf("%d", &age);
   printf("GPA: ");
   scanf("%f", &gpa);
   printf("วิชาที่โปรด: ");
   scanf("%s", subject);
   printf("=== ข้อมูลที่ป้อน ===\n");
   printf("ชื่อ: %s\n", name);
   printf("อายุ: %d\n", age);
   printf("GPA: %.2f\n", gpa);
   printf("วิชาที่โปรด: %s\n", subject);
   return 0;
}
