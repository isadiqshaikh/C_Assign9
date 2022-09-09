#include<stdio.h>
int main()
{
    int n;
    printf("Enter month number : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("January-30 days");
        break;
        case 2:printf("febrary-30 days");
        break;
        case 3:printf("march-30 days");
        break;
        case 4:printf("april-30 days");
        break;
        case 5:printf("may-30 days");
        break;
        case 6:printf("june-30 days");
        break;
        case 7:printf("July-30 days");
        break;
        case 8:printf("august-30 days");
        break;
        case 9:printf("septe-30 days");
        break;
        case 10:printf("oct-30 days");
        break;
        case 11:printf("nov-30 days");
        break;
        case 12:printf("dec-30 days");
        break;
       default:printf("Invalid Month Number");

    }
}
