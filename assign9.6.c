#include<stdio.h>
int main()
{
    int a;
    printf("Enter a year");
    scanf("%d",&a);
    switch(a%100==0)
    {
        case 1:switch (a%400==0)
                      {
                          case 0:printf("Leap Year");
                          break;
                          case 1:printf("Non Leap Year");
                          break;

                       }
                          break;


        case 0: switch (a%4==0)
                      {
                          case 0:printf("Leap Year");
                          break;
                          case 1:printf("Non Leap Year");
                          break;

                       }
    }
}
