#include <stdio.h>
#include <stdlib.h>
//3.11编程练习1 //观察整数上溢,浮点数上溢和下溢
int main (void)
{
    int i;
    short num1 = 1;                 //占位符%hd
    unsigned short num2 = 1;        //占位符%hu
    int num3 = 1;                   //占位符%d
    unsigned int num4 = 1;          //占位符%u
    long num5 = 1;                  //占位符%ld
    unsigned long num6 = 1;         //占位符%lu
    long long num7 = 1;             //占位符%lld
    unsigned long long num8 = 1;    //占位符%llu
    float num9i, num9x;             //占位符%f 指数表示法%e
    double num10i, num10x;          //占位符%lf 指数表示法%e
    //short类型取值范围上溢及下溢
    for (i = 0; i < sizeof(num1)*8 - 1; i++)//有符号字节数*8位减1位
    {
        num1 *= 2;
    }
    printf("short类型num1占%zd字节\n取值范围为:\t\t%hd 至 %hd\n",sizeof(num1) ,num1 , num1 - 1);//sizeof 返回值占用符%zd
    printf("最小值减1下溢为:\t%hd\n最大值加1上溢为:\t%hd\n",num1 - 1, num1);
    printf("short下溢和上溢表现为在取值范围内循环\n");
    printf("\n");
    //unsigned short类型取值范围上溢及下溢
    for (i = 0; i < sizeof(num2)*8; i++)//无符号字节数*8
    {
        num2 *= 2;
    }
    printf("[unsigned short]类型num2占%zd字节\n取值范围为:\t\t%hu 至 %hu\n",sizeof(num2) ,num2, num2 - 1);
    printf("最小值减1下溢为:\t%hu\n最大值加1上溢为:\t%hu\n",num2 - 1, num2);
    printf("[unsigned short]下溢和上溢表现为在取值范围内循环\n");
    printf("\n");
    //int 类型取值范围上溢及下溢
    for (i = 0; i < sizeof(num3)*8 - 1; i++)//有符号字节数*8位减1位
    {
        num3 *= 2;
    }
    printf("[int]类型num3占%zd字节\n取值范围为:\t\t%d 至 %d\n",sizeof(num3) ,num3, num3 - 1);
    printf("最小值减1下溢为:\t%d\n最大值加1上溢为:\t%d\n",num3 - 1, num3);
    printf("[int]下溢和上溢表现为在取值范围内循环\n");
    printf("\n");
    //unsigned int 类型取值范围上溢及下溢
    for (i = 0; i < sizeof(num4)*8; i++)//无符号字节数*8位
    {
        num4 *= 2;
    }
    printf("[unsigned int]类型num4占%zd字节\n取值范围为:\t\t%u 至 %u\n",sizeof(num4) ,num4, num4 - 1);
    printf("最小值减1下溢为:\t%u\n最大值加1上溢为:\t%u\n",num4 - 1, num4);
    printf("[unsigned int]下溢和上溢表现为在取值范围内循环\n");
    printf("\n");
    //long 类型取值范围上溢及下溢
    for (i = 0; i < sizeof(num5)*8 - 1; i++)//有符号字节数*8位减1位
    {
        num5 *= 2;
    }
    printf("[long]类型num5占%zd字节\n取值范围为:\t\t%ld 至 %ld\n",sizeof(num5) ,num5, num5 - 1);
    printf("最小值减1下溢为:\t%ld\n最大值加1上溢为:\t%ld\n",num5 - 1, num5);
    printf("[long]下溢和上溢表现为在取值范围内循环\n");
    printf("\n");
    //unsigned long 类型取值范围上溢及下溢
    for (i = 0; i < sizeof(num6)*8; i++)//无符号字节数*8位
    {
        num6 *= 2;
    }
    printf("[unsigned long]类型num6占%zd字节\n取值范围为:\t\t%lu 至 %lu\n",sizeof(num6) ,num6, num6 - 1);
    printf("最小值减1下溢为:\t%lu\n最大值加1上溢为:\t%lu\n",num6 - 1, num6);
    printf("[unsigned long]下溢和上溢表现为在取值范围内循环\n");
    printf("\n");
    //long long 类型取值范围上溢及下溢
    for (i = 0; i < sizeof(num7)*8 - 1; i++)//有符号字节数*8位减1位
    {
        num7 *= 2;
    }
    printf("[long long ]类型num7占%zd字节\n取值范围为:\t\t%lld 至 %lld\n",sizeof(num7) ,num7, num7 - 1);
    printf("最小值减1下溢为:\t%lld\n最大值加1上溢为:\t%lld\n",num7 - 1, num7);
    printf("[long long ]下溢和上溢表现为在取值范围内循环\n");
    printf("\n");
    //unsigned long long  类型取值范围上溢及下溢
    for (i = 0; i < sizeof(num8)*8; i++)//无符号字节数*8位
    {
        num8 *= 2;
    }
    printf("[unsigned long long ]类型num8占%zd字节\n取值范围为:\t\t%llu 至 %llu\n",sizeof(num8) ,num8, num8 - 1);
    printf("最小值减1下溢为:\t%llu\n最大值加1上溢为:\t%llu\n",num8 - 1, num8);
    printf("[unsigned long long ]下溢和上溢表现为在取值范围内循环\n");
    printf("\n");
    //float 类型取值范围上溢及下溢 由于计算较为复杂暂时只取值 ≈1.18×10-38 至 ≈3.40×1038
    num9i = -1.18e-38;
    num9x = 3.40e38;
    printf("[float]类型num9占%zd字节\n取值范围为：≈%.2e 至 ≈%.2e\n",sizeof(num9i), num9i, num9x);
    printf("最小值下溢为:\t%e\n最大值上溢为:\t%e\n",num9i / 1e286, num9x * 1e272);
    printf("\n");
    //double 类型取值范围上溢及下溢 由于计算较为复杂暂时只取值 ≈2.23×10-308 至 ≈1.79×10308
    num10i = -2.23e-308;
    num10x = 1.79e308;
    printf("[double]类型num10占%zd字节\n取值范围为：≈%.2e 至 ≈%.2e\n",sizeof(num10i), num10i, num10x);
    printf("最小值下溢为:\t%e\n最大值上溢为:\t%e\n",num10i / 1e16, num10x * 10);

    return 0;
}


