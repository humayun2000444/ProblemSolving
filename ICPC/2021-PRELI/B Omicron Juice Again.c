#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t,f=1;
    scanf("%d", &t);
    while(t--)
        {
        int s=0,a,b,c,k;
        scanf("%d %d %d %d", &a, &b, &c, &k);
        s = (a + b + c);
        if ((s % 3) != 0) {
            printf("Case %d: Fight\n",f++);
            s=0;

        } else {
            s=(a+b+c)/3;
            if(abs(a-s)%k==0 && abs(b-s)%k==0 && abs(c-s)%k==0 )
                {
                    printf("Case %d: Peaceful\n",f++);

                }
                else {
                    printf("Case %d: Fight\n",f++);

                }


            }
        }

    }
