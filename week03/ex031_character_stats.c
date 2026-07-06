#include <stdio.h>
int main()
{
    char name[50];
    int player_hp;
    int attack_power;
    int defense_power;
    int player_level;
    printf("=== ป้อนข้อมูลตัวละคร ===\n");
    printf("ชื่อ: ");
    scanf("%s", name);
    printf("พลังชีวิต: ");
    scanf("%d", &player_hp);
    printf("พลังโจมตี: ");
    scanf("%d", &attack_power);
    printf("พลังป้องกัน: ");
    scanf("%d", &defense_power);
    printf("ระดับตัวละคร: ");
    scanf("%d", &player_level);
    printf("=== ข้อมูลตัวละคร ===\n");
    printf("ชื่อ: %s\n", name);
    printf("พลังชีวิต: %d\n", player_hp);
    printf("พลังโจมตี: %d\n", attack_power);
    printf("พลังป้องกัน: %d\n", defense_power);
    printf("ระดับตัวละคร: %d\n", player_level);
    return 0;
}
