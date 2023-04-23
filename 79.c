// 定义宏
#include <stdio.h>

#define SQUARE(X)  X*X
#define ADD(X)  (X)+(X)

#define MAX(X,Y)  ((X)>(Y)?(X):(Y))

int main()
{
    int ret1 = SQUARE(5);
    int ret2 = SQUARE(4+1);
    printf("%d  %d\n",ret1,ret2);

    int ret3 = 10*ADD(5);
    printf("%d\n",ret3);

    int a=10;
    int b=11;
    int max = MAX(a,b);
    int max2 = MAX(a++,b++);
    printf("%d\n",max);
    printf("%d %d %d",a,b,max2);
}
//宏是直接替代，不会先计算