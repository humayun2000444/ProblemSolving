#include <stdio.h>
#include <math.h>
int main()
{
    int t =1000;

    while(t--)
    {
        float d=0,w,l,x;
        scanf("%f %f",&l,&w);
        if(w==0 && l==0)
        {
             break;

        }

        else if(w>l)
        {
            x=l/1.6;
        d=((2*x)+(w-(sqrt((x*x)-((l-x)*(l-x))))));
        printf("%.4f\n",d);
        }

    }
}
