#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the value you want to withdraw from the bank: ");
    scanf("%d ", &num);

   
        if(num/500>0)
        {
            printf("You will be given %d 500 dollar bill", num/500);
            num=num%500;
        }
        if(num/200>0)
        {
            printf("You will be given %d 200 dollar bill", num/200);
            num=num%200;
        }
        if(num/100>0)
        {
            printf("You will be given %d 100 dollar bill", num/100);
            num=num%100;
        }
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the value you want to withdraw from the bank: ");
    scanf("%d", &num);

   /*
        if((num/500)>0)
        {
            printf("You will be given %d 500 dollar bill\n", num/500);
            num=num%500;
        }
        if((num/200)>0)
        {
            printf("You will be given %d 200 dollar bill\n", num/200);
            num=num%200;
        }
        if((num/100)>0)
        {
            printf("You will be given %d 100 dollar bill\n", num/100);
            num=num%100;
        }
        if((num/50)>0)
        {
            printf("You will be given %d 50 dollar bill\n", num/50);
            num=num%50;
        }
        if((num/20)>0)
        {
            printf("You will be given %d 20 dollar bill\n", num/20);
            num=num%20;
        }
        if((num/10)>0)
        {
            printf("You will be given %d 10 dollar bill\n", num/10);
            num=num%10;
        }
        if((num/5)>0)
        {
            printf("You will be given %d 5 dollar bill\n", num/5);
            num=num%5;
        }
        if((num/2)>0)
        {
            printf("You will be given %d 2 dollar bill\n", num/2);
            num=num%2;
        }
        if(num/1>0)
        {
            printf("You will be given %d 1 dollar bill\n\n\n", num/1);
        }*/

        int arr[]={1,2,5,10,20,50,100,200,500};
        int i=1;
        while (num>0)
        {
          if((num/arr[sizeof(arr)/sizeof(arr[0])-i])>0)
          {
            printf("You will be given %d %d dollar bill.\n", num/arr[sizeof(arr)/sizeof(arr[0])-i], arr[sizeof(arr)/sizeof(arr[0])-i]);
            num=num%arr[sizeof(arr)/sizeof(int)-i];
          }
          i++;

        }
   
    return 0;
}