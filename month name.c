#include<stdio.h>

void main()
{
    int a;
    printf("enter the month number : ");
    scanf("%d",&a);
    
//    printf("Press 1 for january\n");
//    printf("Press 2 for February\n");
//    printf("Press 3 for March\n");
//    printf("Press 4 for April\n");
//    printf("Press 5 for May\n");
//    printf("Press 6 for June\n");
//    printf("Press 7 for July\n");
//    printf("Press 8 for August\n");
//    printf("Press 9 for September\n");
//    printf("Press 10 for October\n");
//    printf("Press 11 for November\n");
//    printf("Press 12 for December\n");
//    
//    printf("Enter your choice = ");
//    scanf("%d",&a);
//    
    switch(a)
    {
        case 1: printf("January");
                break;
        case 2: printf("February");
                break;
        case 3: printf("March");
                break;
        case 4: printf("April");
                break;
        case 5: printf("May");
                break;
        case 6: printf("June");
                break;
        case 7: printf("July");
                break;
        case 8: printf("August");
                break;
        case 9: printf("September");
                break;
        case 10: printf("October");
                break;
        case 11: printf("November");
                break;
        case 12: printf("December");
                break;
        default : printf("plz Enter valid choice");
    }


}