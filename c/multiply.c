/*

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define buf_size 2048

char *multiply(char *num1, char *num2) 
{
    char buf[buf_size];
    int a[buf_size],b[buf_size];
    int res[buf_size];
    int i=0;
    int lenth1=0,lenth2=0;
    int count=0;
    int j=0;
    // char zero[]="0";
    memset(a,0,buf_size);
    memset(b,0,buf_size);
    memset(res,0,buf_size);
    if(num1[0]=='0' || num2[0]=='0')
        return "0";
    while(num1[i] != '\0'){
        a[i]=num1[i]-'0';
        i+=1;
    }
    lenth1=i;
    i=0;
    while(num2[i] != '\0'){
        b[i]=num2[i]-'0';
        i+=1;
    }
    lenth2=i;
    printf("lenth1:%d lenth2:%d\n",lenth1,lenth2);
    for(i=0;i<lenth2;i++){
        for(j=i;j<i+lenth1;j++){
            int tmp=res[j]+a[lenth1-1-j]*b[i]+count;
            printf("tmp:%d\n",tmp);
            count=tmp/10;
            res[j]=tmp%10;
            printf("cout:%d res:%d\n",count,res[i]);
        }
        if(count){
            res[j]=count;
        }
    }
        if(count != 0){
            printf("j:%d\n",j);
            res[j]=count;
            count=0;
            // j=j+lenth1+1;
        }
        else j-=1;
    int n=0;
    memset(num1,'\0',buf_size);
    for(i=j;i>=0;i--){
        // printf("res:%d\n",res[n]);
        num1[i] = res[n++]+'0';
    }
    return num1;
}

int main()
{
    char num1[buf_size];
    char num2[buf_size];
    //初始化字符串缓冲
    memset(num1, '\0', buf_size);
    memset(num2, '\0', buf_size);
    printf("请输入两个只含数字的字符串以空格分隔\n");
    scanf("%s %s", num1, num2);
    printf("%s\n", multiply(num1, num2));
    return 0;
}


