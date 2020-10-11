#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    int sum = 0;
    int term;
    int a = 1; //starting no. of the series
    int d = 2; //diff between two consecutive no. (AP)
    printf("Enter the nth term upto which square of odd is to be calculated");
    scanf("%d",&term);
    i = term; // store the value of nth term 
    term = a + ((term-1)*d); //find the nth term
    while (a<=term)
    {
        sum += (a*a);
        a+=2;
    }
    printf("sum of square of numbers upto %d term is %d",i,sum);
    return 0;
    
}