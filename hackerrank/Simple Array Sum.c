#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
 {
    int i,j=0,k,n;
    scanf("%d",&n);
    int z[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&z[i]);
    }
    for(i=0;i<n;i++)
    {
        j=j+z[i];
    }
    printf("%d",j);
    return 0;
}
