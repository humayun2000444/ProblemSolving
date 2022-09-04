#include <stdio.h>
int main()
{
    int s=0,t,f=1;
    scanf("%d", &t);
    while(t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        s=a+b+c;
        if(s%3==0)
            {


                printf("Case %d: Peaceful\n",f++);
                s=0;
            }
        else
            printf("Case %d: Fight\n",f++);
            s=0;
    }
}
