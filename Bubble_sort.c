//Bubble Sort
//input: 15 6 8 5 16
//pass1 : 6 8 5 15 16 
//pass1 : 6 5 8 15 16
//pass1 : 5 6 8 15 16
//pass1 : 5 6 8 15 16
//pass1 : 5 6 8 15 16

//output: 5 6 8 15 16







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
    int arr[]={15,16,6,8,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n-j-1;i++)
    {
        if(arr[i]>arr[i+1]) swap(&arr[i],&arr[i+1]);
    }   
    }
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
      return 0;
}
