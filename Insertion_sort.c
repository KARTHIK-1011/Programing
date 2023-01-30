//Insertion sort

//Input: 5 4 10 1 6 2
//pass1 : 4 5 10 1 6 2
//pass2 : 4 5 10 1 6 2
//pass3 : 1 4 5 10 6 2
//pass4 : 1 2 5 6 10 2 
//Output: : 1 2 4 5 6 10





#include <stdio.h>
int main()
{
    int arr[]={5,4,10,1,6,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j;
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}
