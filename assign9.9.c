#include<stdio.h>
int main()
{
    int x;
    printf("Enter your number");
    scanf("%d",&x);
    switch(x%2==0)
    {
        case 1:printf("%d",x+1);
        break;
        case 0:printf("%d",x);

    }
}
