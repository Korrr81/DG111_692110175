#include <stdio.h>
#include <stdbool.h>
int main() 
{
    int max_hp, damage, attack_count;
    int poisoned_input;
    bool is_poisoned;

    printf("Max HP: "); 
    scanf("%d", &max_hp); 
    printf("Damage Taken: "); 
    scanf("%d", &damage); 
    printf("Poisoned (0/1): ");
    scanf("%d", &poisoned_input);
    is_poisoned = poisoned_input ;
    printf("Attack Count: ");
    scanf("%d", &attack_count);

    int hp = max_hp - damage;
    if (hp < 0) {
        hp = 0;
    }

    printf("=== Character State ===\n");
    if (hp <= 0) {
        printf("State: Dead\n");
    }
    else if ((float)hp / max_hp < 0.25) {
        printf("State: Critical\n");
    }
    else if (is_poisoned) {
        printf("State: Poisoned\n");
    }
    else {
        printf("State: Normal\n");
    }
    if (attack_count > 0 && attack_count % 5 == 0) {
        printf("+ultimate!\n");

    }    
    return 0;
}