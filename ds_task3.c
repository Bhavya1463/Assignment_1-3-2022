#include<stdio.h>
#define leftchild(n) (2*n + 1)
#define rightchild(n) (2*n + 2)

void printorder(int *a,int head,int leaf)
{
    int l=leaf;
    if(head==0)
    {
        printf("%d ",a[0]);
    }
    else
    {
        for(int i=head;i<(head+leaf)/2+1;i++,l--)
        {   
            printf("%d %d ",a[i],a[l]);

        }
  
    }
}

void top_down(int *a,int n,int i,int j)
{
    if(j>n-1)
    {
        return;
    }
    else
    {
        printorder(a,i,j);
        top_down(a,n,leftchild(i),rightchild(j));
    }
}

void bottom_up(int *a,int n,int i,int j)
{
    if(j>n-1)
    {
        return;
    }
    else
    {
        bottom_up(a,n,leftchild(i),rightchild(j));
        printorder(a,i,j);
    }
}

int main()
{

    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n=15;
    printf("\n1.Top Down Approach\n");
    top_down(a,15,0,0);
    printf("\n");
    printf("\n2.Bottom Up Approach\n");
    bottom_up(a,15,0,0);

    return 0;
}
