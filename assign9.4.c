#include<stdio.h>
int main()
{
    int a;
    printf("Enter your choice");
    scanf("%d",&a);
    switch(a)
    {
        case 1 ... 10:printf("arman");
        break;
        case 11 ... 20:printf("ayan");
        break;
        case 21 ... 30:printf("aman");
        break;
        case 31 ... 40:printf("sadik");
        break;
    }
}
