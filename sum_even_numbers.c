#include<stdio.h>
#include<conio.h>
int main()
{
    int sum = 0;
    int n;
    int i;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    if( i%2==0)
    
        sum+=i;
    
    }
    printf("Sum of even numbers upto %d is %d",n,sum);
    return 0;
}
