//selection sort

//input: 10 5 26 3 15 22
//pass1 : 3 10 26 5 15 22
//pass2 : 3 5 26 10 15 22
//pass3 : 3 5 10 26 15 22
//pass4 : 3 5 10 15 26 22
//pass5 : 3 5 10 15 22 26
//output: 3 5 10 15 26 22



#include <stdio.h>
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


int main()
{
    int arr[]={10,5,26,3,15,22};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++) 
        if(arr[i]>arr[j]) swap(&arr[i],&arr[j]);
    }
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}
