#include <stdio.h>

int main() {
    int num,i,j,arr[10],temp,loc;
    printf("Enter the size of array: \n");
    scanf("%d",&num);
    printf("Enter the array:\n");
    for (i=0;i<num;i++)
    {scanf("%d",&arr[i]);}
    for (i=0;i<num;i++)
    {temp=arr[i];
        loc=i;
        for(j=i;j<num;j++)
        {if (temp>arr[j])
            {temp=arr[j];
             loc=j;}}
            arr[loc]=arr[i];
            arr[i]=temp;}
    printf("Sorted array :\n");
    for (i=0;i<num;i++)
    {printf("%d\t",arr[i]);
    } return 0;}