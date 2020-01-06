#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <time.h>
int main(int argc, char * argv[])
{


    unsigned long iMax = 90000000;
    unsigned long sum=0;
  
    char *p = (char *)malloc(sizeof(char) * iMax + 1);
    bzero(p, sizeof(char) * iMax + 1);
    
    unsigned  long i = 0, j = 0;
    int begintime,endtime;
    begintime=clock();
    for(i = 2; i <= iMax; i++)
    {
        for(j = i + i; j <= iMax; j += i)
        {
            p[j] = 1;
        }
    }
    int iAll = 0;
    for(i = 2; i <= iMax; i++)
    {
        if(0 == p[i])
        {
            iAll ++;
            sum=sum+i;
        }
    }
    endtime=clock();
    free(p);
    printf("all : %d\n", iAll);
    printf("sum:%ld\n",sum);
    printf("time:%dms\n",(endtime-begintime));
    
    return 0;
}
