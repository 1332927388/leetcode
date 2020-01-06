#include <stdio.h>
#include <stdlib.h>


int reverse(int x){
    int tmp[100];
    int i = 0;
    int j = 0;
    long long buf=0;
    while(x) {
        tmp[i++] = x%10;
        x/=10;
    }
    for(j=0;j<i;j++) {
        buf = buf*10+tmp[j];
    }
    if( buf > 2147483647 | buf < -2147483648)
        return 0;
    return buf;
}
int main(){
    int integer = 0;
    scanf("%d",&integer);
    printf("反转后的结果：%d\n", reverse(integer));
}


