// 定义宏
#include <stdio.h>

int Max(int x,int y)
{
    return (x>y?x:y);
}

#define MAX(X,Y)  ((X)>(Y)?(X):(Y))

int main()
{
    int a=10;
    int b=11;
    int max1 = Max(a,b);
    int max2 = MAX(a,b);
    printf("%d\n%d\n",max1,max2);
    return 0;
}