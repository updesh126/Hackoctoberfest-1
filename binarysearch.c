#include <stdio.h>
void main()
{
    int A[20], i, n, m,fs,md,le;
    printf("enter the No element of Arry");
    scanf("%d", &n);
    printf("Enter the element of Arry");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("\nEnter the element you want to search");
    scanf("%d", &m);
    fs=0;
    le=n;
    md=(fs+le)/2;
    while (fs<=le)
    {
        if(A[md]==m)
        {
            printf("the %d is at %d index",m,md+1);
            break;
        }
        else if (A[md]<m)
        {
            fs=md+1; 
        }
        else{
            fs=md-1;
        }
        md=(fs+le)/2;
    }

}
