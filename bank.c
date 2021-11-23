#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the value you want to withdraw from the bank: ");
    scanf("%d", &num);

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
