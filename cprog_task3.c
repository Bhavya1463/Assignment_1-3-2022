/*Search and Sequence
Consider an integer array ‘a’ of size 10, where the value of the array elements are
{1,5,4,8,9,2,0,6,11,7}. Write a program to
▪ Find whether the given element exists in an array or not. If the element exists in an
array, display YES else NO.
▪ To print a number following a sequence of elements in an array i.e., 15489206117.

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void search(int [],int);

int main()
{
    int arr[10]={1,5,4,8,9,2,0,6,11,7};

    int key;
    

    printf("Enter the elemet to search in array: ");
    scanf("%d",&key);

    search(arr,key);


    printf("The array is :");
    for(int i=0;i<10;i++)
    {
        
        printf("%d",arr[i]);
    }

    return 0;
}

void search(int arr[10],int key)
{
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==key)
        {
            count+=1;
            printf("\nIndex: %d\n",i);
        }
    }


    if(count==0)
    {
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }

}