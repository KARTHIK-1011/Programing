/* Input : 15 5 20 35 2 42 67 17 
target : 42
Output: Element Found at the location 6

target : 9
Output : Element Not Found

*/




#include <stdio.h>

int main()
{
    int arr[]={15,5,20,35,2,42,67,17};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    scanf("%d",&target);
    int position=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            position=i+1;
            break;
        }
    }
    if(position>0) printf("Element Found at the location %d",position);
    else printf("Element Not Found");
    return 0;
}
