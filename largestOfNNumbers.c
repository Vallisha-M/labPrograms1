#include <stdio.h>
#include <limits.h>
int main()
{
    int n,i;
    int arr[50];
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter %d elements ;\n",n);
    for(i=0;i<n;i++)
        scanf("%d",arr+i);
    int lar=INT_MIN;
    for(i=0;i<n;i++)
        if(lar<arr[i])
            lar=arr[i];
    printf("Largest number is %d",lar);
    return 0;
}
