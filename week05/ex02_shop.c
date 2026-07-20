#include <stdio.h>
int main ()
{
    int gold = 1000;
    printf("=== Item shop ===\n");
    printf("You have %d Gold.\n", gold);
    printf("1. Health Potion 50 Gold (+50 HP)\n");
    printf("2. Mana Potion   80 Gold (+30 MP)\n");
    printf("3. IronSword     500 Gold (+20 ATK)\n");
    printf("4. Leather Armor 300 Gold (+15 DEF)\n");
    printf("5. Exit\n");
    printf("Select item (1-5): ");
    scanf("%d", &gold);
    printf("=== Purchase ===\n");
    switch (gold)
    {
        case 1:
            printf("Health Potion: 50 Gold\n");
            printf("item purchased!\n");
            break;
        case 2:
            printf("Mana Potion: 80 Gold\n");
            printf("item purchased!\n");
            break;
        case 3:
            printf("Iron Sword: 500 Gold\n");
            printf("item purchased!\n");
            break;
        case 4:
            printf("Leather Armor: 300 Gold\n");
            printf("item purchased!\n");
            break;
        case 5:
            printf("Exiting the shop.\n");
            break;
        default:
            printf("Invalid selection. Please choose a number between 1 and 5.\n");
    }

return 0;
}
    

    