#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[25];
    int max=INT_MIN,min=INT_MAX,l,s,i,j,n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter %d elements ; \n",n);
    for(i=0;i<n;i++)
        scanf("%d",arr+i);
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            l=i;
            max=arr[i];
        }

        if(min>arr[i])
         {
             s=i;
             min=arr[i];
         }
    }
    j=arr[s];
    arr[s]=arr[l];
    arr[l]=j;
    printf("The new array is ;\n");
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
    return 0;
}
