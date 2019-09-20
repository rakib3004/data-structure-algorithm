#include<stdio.h>
int main()
{
    printf("Enter your Stack size>>>");
    int n;

    scanf("%d",&n);
    int a[n]= {0};
    printf("Enter number of element\nyou want to insert\nin the stack>>>");
    int k;

    scanf("%d",&k);
    int i;
    for(i=0; i<k; i++)
    {
        printf("Item No %d : ",i+1);
        scanf("%d",&a[i]);
    }

    int l;
G:
    printf(" Now what do you want to do???\n\n1.Push\n2.Pop\n3.Stop\n");
    printf("Press Your Key>>>");
    scanf("%d",&l);
    if(l==1)
    {
        if(n==k)
        {
            printf("\n\nStack__Over__Flow!!!!\n\n\n");
        }
        else
        {
            printf("The item you want to push>>>");
            scanf("%d",&a[k]);
            k++;
            for(i=0; i<k; i++)
            {
            printf("Item no %d : %d\n",i+1,a[i]);
            }
        }
        goto G;
    }
    else if(l==2)
    {
    if(k==0)
        {
            printf("\n\nStack__Under__Flow!!!!\n\n\n");
        }
        else
        {
            a[k-1]=0;
            k--;
        }
        for(i=0; i<k; i++)
        {
            printf("Item no %d : %d\n",i+1,a[i]);
        }
        goto G;
    }
    else
    {
        return 0;
    }
}
