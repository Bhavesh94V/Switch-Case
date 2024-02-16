#include <stdio.h>
main()
{

    // Q.1 Write a Program to find the minimum number from the given 2 numbers using the ternary operator.
    int num1, num2;

    printf("Enter the number 1:");
    scanf("%d", &num1);

    printf("Enter the number 2:");
    scanf("%d", &num2);

    printf("Number 1 is--> %d\n", num1);
    printf("Number 2 is--> %d\n", num2);

    (num1 < num2) ? printf("---> %d is Minimum", num1) : printf("---> %d is Minimum\n\n", num2);

    // Q.2 Write a Program to create a menu-driven program for Telecom call service conversation using nested switch case.

    int lan, rec;

    printf("\nSelect the Language (1:English ,2:Hindi ,3:Gujarati)\n");
    scanf("%d", &lan);

    switch (lan)
    {
    case 1:
        printf("\nSelect the Recharge (1:Internet Recharge ,2:Top-up Recharge ,3:Special Recharge)");
        scanf("%d", &rec);

        switch (rec)
        {
        case 1:
            printf("You have successfully done Internet Recharge.\n");
            break;

        case 2:
            printf("You have successfully done Top-up Recharge.\n");
            break;

        case 3:
            printf("You have successfully done Special Recharge.\n");
            break;

        default:
            printf("Invalid Input\n");
            break;
        }
        break;

    case 2:

        printf("--->Internet Recharge ke liye 1 dabaiye\n--->Top-up Recharge ke liye 2 dabaiye\n--->Special Recharge ke liye 3 dabaiye\n");

        printf("\nSelect the Recharge (1:Internet Recharge ,2:Top-up Recharge ,3:Special Recharge)\n");
        scanf("%d", &rec);

        switch (rec)
        {
        case 1:
            printf("Aapne safaltapurvak Internet Recharge kar liya he.\n");
            break;

        case 2:
            printf("Aapne safaltapurvak Top-up Recharge kar liya he.\n");
            break;

        case 3:
            printf("Aapne safaltapurvak Special Recharge kar liya he.\n");
            break;

        default:
            printf("Invalid Input\n");
            break;
        }
        break;

    case 3:

        printf("--->Internet Recharge mate 1 dabavo\n--->Top-up Recharge mate 2 dabavo\n--->Special Recharge mate 3 dabavo\n");

        printf("\nSelect the Recharge (1:Internet Recharge ,2:Top-up Recharge ,3:Special Recharge)\n");
        scanf("%d", &rec);

        switch (rec)
        {
        case 1:
            printf("Tame safaltapurvak Internet Recharge karyu chhe.\n");
            break;

        case 2:
            printf("Tame safaltapurvak Top-up Recharge karyu chhe.\n");
            break;

        case 3:
            printf("Tame safaltapurvak Special Recharge karyu chhe.\n");
            break;

        default:
            printf("Invalid Input\n");
            break;
        }
        break;

    default:
        printf("Invalid Input\n");
        break;
    }
}