#include <stdio.h>
#include <math.h>
int main()
{
    int player_attack, enemy_defense, hit_number;
    printf("===Combat Simulator===\n");
    printf("Enter player attack value: ");
    scanf("%d", &player_attack);
    printf("Enter enemy defense value: ");
    scanf("%d", &enemy_defense);
    printf("Enter number of hits: ");
    scanf("%d", &hit_number);
    int base_damage = (player_attack - enemy_defense);
    int damage;
    if (hit_number % 5 == 0)
    {
        damage = (int)ceil((float)base_damage * 1.5f);
        printf("damage = %d *** CRITICAL HIT! x1.5 *** \n", damage);
    }
    else
    {
        damage = base_damage;
        printf("damage = %d (normal)\n", damage);
    }

    return 0;
}