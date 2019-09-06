
#include<stdio.h>

#include<stdlib.h>
#define max 100

int y=0;
int main()
{

    if(y)
    {

        printf("Are you want to continue this program:\n");
        printf("1.**YES**\n2.**NO**\n\n");

        int f;
        printf("Press Your Key>>>>>>");
        scanf("%d",&f);

        if(f==1)
        {
            printf("\n\n           _-_-  WELCOME  AGAIN TO THIS PROGRAM  -_-_  \n\n\n");
        }
   else if(f==2)
        {

            printf("****####****Good__Bye****####****") ;
            return 0;
        }

    }
    else
    {
        y=1;

        printf("\n\n           _-_-  WELCOME TO THIS PROGRAM  -_-_  \n\n\n");

   }

    int n;
    int i,j;
    int a[max]= {};
    printf("The size of your array is>>>");
    scanf("%d",&n);
    printf("\n\n");

    for(i=0; i<n; i++)
    {

        printf("%d_th element is>>>",i+1);

        scanf("%d",&a[i]);
    }

    int p;

    printf("\n\n");

    printf("Choose Your Option>>>\n");

    printf("1.***Insert***\n2.***Delete***\n3.***Sort***\n\n");
    printf("Press the key>>>");
    scanf("%d",&p);
    if(p==1)
    {
        int index,item;

        printf("The index of the array where you want to insert>>>");
        scanf("%d",&index);

        printf("The value of your insertion's index>>>");

        scanf("%d",&item);
        for(j=n-1; j>=index; j--)
        {
            a[j+1]=a[j];
        }

        a[index]=item;

        n=n+1;
        for(i=0; i<n; i++)
        {
          printf("%d_th element is::: %d\n",i+1,a[i]);
        }
    }
    else if(p==2)
    {
    int index,item;
        printf("The index of the array where you want to delete>>");
        scanf("%d",&index);
        n=n-1;

        for(j=index; j<n; j++)
        {

            a[j]=a[j+1];
        }


        for(i=0; i<n; i++)
        {
        printf("%d_th element is::: %d\n",i+1,a[i]);
            }
    }


    else if(p==3)
    {

        int temp;
        int g;

        for(i=0; i<n; i++)
        {
            for(j=0; j<n-i-1; j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }

            printf("%d th Step::::\n",i+1);

            for(g=0; g<n; g++)
            {
                printf("%d_th element is::: %d\n",g+1,a[g]);
            }

            printf("\n\n");
        }
          }

    return main();
}


