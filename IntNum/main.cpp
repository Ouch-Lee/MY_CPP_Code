#include<stdio.h>
#include<windows.h>

int check_sys()
{
    int num = 1;
    char *p = (char *)&num;
    //&num为int *
    //我们只看第一个字节所以强转为char *

    if (*p == 1)
        return 0;//小端
    else
        return 1;//大端
}

int main()
{
    int ret = check_sys();
    if (ret == 0)
        printf("little");
    else
        printf("big");
    system("pause");
    return 0;
}