#include <stdio.h> 
#include <limits.h>
#include <stdlib.h>
#include <string.h>


int myAtoi(char *str){
    long tmp=0;
    char *buf;
    buf = str;
    int i=0,flag=0;
    int neg=0;
    int hanhan = 0;
    int shuzi = 0;
    int lenth = strlen(str);
    printf("lenth: %d\n",lenth);
    while(!flag) {
        if(buf[i]!='-' & (buf[i]>'9' | buf[i]<'0')) {
            printf("buf[i]:%c\n",buf[i]);
            if(buf[i] != ' ')
                hanhan = 1;
            i+=1;
            printf("hanhan:%d\n",hanhan);
        }
        else {
            if(buf[i]=='-') {
                neg=1;
                i+=1;
            }
            while(buf[i]>='0' & buf[i]<='9') {
                tmp = tmp*10+buf[i]-'0';
                i+=1;
                if(tmp>INT_MAX)
                    break;
            }
            flag = 1;
            shuzi = 1;
        }
        if(hanhan==1 & shuzi==0) return 0;
        if(shuzi==1) hanhan = 0;
        if(i>=lenth)
            flag = 1;
    }
    if(neg) tmp *= -1;
    printf("tmp:%ld\n",tmp);
    if(tmp > INT_MAX )
        return INT_MAX;
    else if(tmp < INT_MIN)
        return INT_MIN;
    return (int)tmp;
}
int main(){
    char str[2048];
    long test = 33333333333;
    // scanf("%s",str);
    gets(str);
    printf("%d\n", myAtoi(str));
    // printf("long:%ld,int:%d",test,(int)test);
    return 0;

}
