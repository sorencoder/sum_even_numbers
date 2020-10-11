#include<stdio.h>
#include<conio.h>
#include<math.h> //needed for pow func
int main()
{
    int i;
    int n;
    int sum = 0;
    printf("Enter the value of n upto which square of odd is to be calculated");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        sum += pow(i,2); //used pow func similar to (i*i)
    }
   printf("sum of square of odd numbers upto %d is %d",n,sum);
    return 0;
}