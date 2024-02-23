#include <stdio.h>
#include <conio.h>
int main ()
{
    int i,j,s,m;
    for(i=1;i<=5;i++)
    {
        s=0;
        for(j=1;j<=3;j++)
        
        {
            printf("enter marks");
            scanf("%d",&m);
            s=s+m;
        }
        printf("sum=%d\n",s);
    }

}