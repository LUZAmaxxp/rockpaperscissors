#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user, comp;
    char *c1 = "rock";
    char *c2 = "paper";
    char *c3 = "scissor";

    printf("Pick rock (0), paper (1), or scissors (2):\n");
    scanf("%d", &user);

    comp = rand() % 3;
    if (comp == 0)
    {
        printf("the computer picks %s \n", c1);
    }
    else if (comp == 1)
    {
        printf("the computer picks %s \n", c2);
    }
    else if (comp == 2)
    {
        printf("the computer picks %s \n", c3);
    }

    if (comp == user)
        printf("Draw\n");
    else
    {
        switch (user)
        {
        case 0:
            (comp == 1) ? printf("You lose\n") : printf("You win\n");
            break;
        case 1:
            (comp == 0) ? printf("You win\n") : printf("You lose\n");
            break;
        case 2:
            (comp == 0) ? printf("You lose\n") : printf("You win\n");
            break;
        }
    }

    return 0;
}
