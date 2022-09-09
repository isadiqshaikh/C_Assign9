#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,a,b;
    while(1)
    {


    printf("\n1 :add");
    printf("\n2 :sub");
    printf("\n3 :mul");
    printf("\n4 :div");
    printf("\n5 :exit");

    printf("\nEnter your choice\n");
    scanf("%d",&i);

    switch(i)
    {
        case 1:
               printf("Enter two numbers");
               scanf("%d%d",&a,&b);
                printf("Sum is %d",(a+b));
                break;
        case 2:
                printf("Enter two numbers");
                scanf("%d%d",&a,&b);
                printf("Sub is %d",(a-b));
                break;
        case 3:
            printf("Enter two numbers");
            scanf("%d%d",&a,&b);
            printf("Mul is %d",(a*b));
            break;
        case 4:
            printf("Enter two numbers");
            scanf("%d%d",&a,&b);
            printf("Div is %d",(a/b));
            break;

        case 5:
            exit(0);
        default: printf("Invalid choice");
    }


    }
}
