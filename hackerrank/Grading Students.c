#include<stdio.h>
int main()
{
    int n,j,i;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        scanf("%d",&i);
        if (i== 43 || i== 53 || i==63 || i==73 || i==83 || i==93 || i==38 || i==48 || i==58 || i==68 || i==78 || i==88 || i==98)
        {
            printf("%d\n",i+2);
        }
        else if (i==39 || i==49 || i==59 || i==69 || i==79 || i==89 || i==99 || i==44 || i==54 || i==64 || i==74 || i==84 || i==94)
        {
            printf("%d\n",i+1);
        }
        else printf("%d\n",i);
    }
    return 0;
}
