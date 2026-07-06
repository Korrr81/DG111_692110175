#include <stdio.h>
int main()
{
    char name[50];
    int player_level;
    int player_hp;
    int attack_power;
    int defense_power;
    int hp_bar;
    printf("=== character sheet ===\n");
    printf("ชื่อ: ");
    scanf("%s", name);
    printf("ระดับตัวละคร: ");
    scanf("%d", &player_level);
    printf("พลังชีวิต: ");
    scanf("%d", &player_hp);
    printf("พลังโจมตี: ");
    scanf("%d", &attack_power);
    printf("พลังป้องกัน: ");
    scanf("%d", &defense_power);
    
    printf("=== character sheet ===\n");
    printf("╔════════════════╗ \n");
    printf("║ %-5s          ║\n", name);
    printf("╠════════════════╣ \n");
    printf("║ Level: %-5d   ║\n", player_level);
    printf("║ HP: %-5d      ║\n", player_hp);
    printf("║ Attack: %-5d  ║\n", attack_power);
    printf("║ Defense: %-5d ║\n", defense_power);
    printf("╠════════════════╣ \n");
    printf("║ HP bar: %-10s  ║\n", "█████");
    printf("╚════════════════╝ \n");

    //for (hp_bar = (attack_power * 2 + defense_power + player_hp / 10))
    //{
    //    printf("█████");
    //}
    return 0;
}