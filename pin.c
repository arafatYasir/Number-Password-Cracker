#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int pin;
    printf("Enter your pin: ");
    scanf("%d", &pin);

    int guess = 0;

    while (pin != guess)
    {
        printf("%d\n", guess);
        guess += 1;
        if (guess == pin)
        {
            printf("Your pin is: %d\n", guess);
            break;
        }
    }

    return 0;
}