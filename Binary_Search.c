/* Input: 5 9 17 23 25 45 59 63 71 89
target : 45 
Output : Element Found at the location 6

target : 99
Output : Element Not Found

*/

//Note: In Binary Search the array Should be Sorted....


int main()
{
    int arr[]={5,9,17,23,25,45,59,63,71,89};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    scanf("%d",&target);
    int lower=0;
    int upper=n-1;
    int flag=0;
    int position;
    int mid=(lower+upper)/2;
    while(lower<upper)
    {
        if(arr[mid]==target)
        {
            flag+=1;
            position=mid+1;
            break;
        }
        else if(target>arr[mid]) lower=mid+1;
        else if(target<arr[mid]) upper=mid-1;
    }
    if(flag==1) printf("Element Found at the location %d",position);
    else printf("Element Not Found");
    return 0;
}
