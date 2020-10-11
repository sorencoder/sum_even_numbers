#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int sum=0;
    int  n;
    int i;
    printf("Enter the value of upto which sum is to be calculated");    
    scanf("%d",&n);                                                     
    for(i=1;i<=n;i++)
    {
        sum+=i;                                                            //calculated the sum upto n numbers (sum=sum+i)
    }
    printf("Sum of numbers is %d",sum);
    getch();
}