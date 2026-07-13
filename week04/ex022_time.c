#include <stdio.h>

int main()
{
    int secs;
    printf("input seconds: ");
    scanf("%d", &secs);
    int hours = secs / 3600;
    int minutes = (secs % 3600) / 60;
    int seconds = secs % 60;
    printf("Output:%02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}