#include<stdio.h>
int main()
{
    int arr[7];
    int sum;
    for(int i=0 ; i<7;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(int j=6 ; j>=0 ; j--)
    {
        sum=sum+arr[j];
        printf(" sum of array = %d",sum);

    }
    return 0;

}