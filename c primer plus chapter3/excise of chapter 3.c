#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
/* //3.1 程序示例
int main(void)
{
    float weight;
    float value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds:");

    scanf("%f",&weight);
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("you are easily worth that! If platinum prices drop, \n");
    printf("eat more to maintain your value.\n");
    getchar();



    return 0;
}
*/


/*
    //3.2程序示例
int main(void)
{
    int ten = 10;
    int two = 2;
    printf("Doing it right: ");
    printf("%d minus %d is %d \n", ten, two, ten - two);
    printf("Doing it wrong: ");
    printf("%d minus %d is %d \n", ten); //遗漏2个参数
    return 0;
}
*/

/*
    //3.3程序示例
    int main (void)
    {
        int x = 100;
        printf("dec = %d; octal = %o; hex = %x \n", x, x, x);
        printf("dec = %d; octal = %#o; hex = %#x \n", x, x, x);
        printf("dec = %d; octal = %#o; hex = %#X \n", x, x, x); //x可以用小写也可以用大写.但是o只能用小写

        return 0;
    }
*/

/*

// 示例程序 数据类型溢出行为 演示
int main (void)
{
    int i = 2147483647;
    unsigned int j = 4294967295;
    int k;
    unsigned int a = 1;
    signed int a1 = 1;
    /// 根据数据类型 确定取值范围
    for (k = 0; k < sizeof(a)*8; k++)
    {
        a = a*2;
    }
    printf("无符号整型数据 unsigned 占%d个字节\n无符号范围为%u 至 %u\n",sizeof(a), a, a - 1);
    for (k = 0; k < sizeof(a1)*8 - 1; k++)
    {
        a1 = a1 * 2;
    }
    printf("有符号整型数据 signed   占%d个字节\n有符号范围为 %d 至 %d\n",sizeof(a1), a1, a1 - 1);
    ///
    printf("%d %d %d\n", i, i + 1, i + 2);
    printf("%u %u %u\n", j, j + 1, j + 2);

    return 0;
}
*/

/*
    //3.4程序是咧
int main (void)
{
    unsigned int un = 2147483647 + 2147483648; //0 - 4294967295;
    short end = 32767; // -32768 - 32767
    long big = 65537; // -2147483648 - 2147483647
    long long verybig = 21474836470;

    printf("un = %u and not %d\n", un, un); // 无符号占位符%u 如使用%d 取值范围为 4*8-1 31位 2^31-1 2147483647 超过就会重复循环 -2147483648 至 2147483647
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);//%hd 为short类型占位符 只去该数据类型末尾2个字节15数据+1位符号 当使用该占位符时 超过2^15-1 32767就会重复循环 -32768 至 32767
    printf("verybig = %lld and not %ld\n", verybig, verybig); //%ld 为long类型的占位符 4个字节 31位+1位符号 范围  -2147483648 至 2147483647



    return 0;
}

*/

/*
//char 是int 类型存储数据的占1个字节8位-128 至 127. 0x00 至 0x7f;
//ASCII 占0-127可以通过不同占位符表示%c ascii字符 %d 数值
int main (void)
{
    int i, j;
    for (i = 0x0; i < 0x20; i++)
    {
        for (j = 0x20 ; j < 0x61; j+=0x20) //0x00 - 0x1f 都是些无实际显示的字符.故从0X20开始打印
        {
            printf("字符:[%c]\tASCII码:%d\t",i + j ,i + j);
        }
    printf("\n");
    }
    return 0;
}
*/

/*
int main (void)
{
    printf("%c""\x09""%d""\x0a", 'a','a');
    printf("%c""\x09""%d""\x0a", 'b','b');
    return 0;
}
*/

/*
int main (void)
{
    printf("Gramps sez, \"a \\ is a backslash\"\n");
    return 0;
}
*/

/*
    //3.5程序示例
    int main (void)
    {
        char ch;
        printf("Please enter a character.\x0a");
        scanf("%c", &ch);
        printf("The code for %c is %d. \x0a", ch, ch);
        return 0;
    }
*/

/*
//3.6程序示例
int main (void)
{
    int32_t me32;
    me32 = 45933945;
    printf("First ,assume int32_t is int: ");
    printf("me32 = %d \x0a", me32);
    printf("Next, let's not make any assuptions. \x0a");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me32 = %"PRID32"\n", me32);
    return 0;
}
*/

/*
int main (void)
{
    float aboat = 1234.0;
    double abet = 1.12e9;
    long double dip = 5.12e-5;
    printf("%f can be written %e\x0a", aboat, aboat);
    printf("And it's %a in hexadecimal, powers of 2 notation\x0a", aboat);
    printf("%f can be written %e\x0a", abet , abet);
    printf("And it's %a in hexadecimal, powers of 2 notation\x0a", abet);
    printf("%Lf can be written %Le\n", dip, dip);
    printf("And it's %a in hexadecimal, powers of 2 notation\x0a", dip);
    return 0;
}
*/
/*
int main (void)
{
    float a, b;
    b = 2.0e4 + 1.0;
    a = b - 2.0e4;
    printf("%f \x0a", a);

    float toobig = 3.4E38 * 100.0f;
    printf("%e\n", toobig);

    return 0;
}
*/

/*
int main (void)
{
    printf("Type int has a size of %zd bytes.\x0a", sizeof(int));
    printf("Type char has a size of %zd bytes. \x0a", sizeof(char));
    printf("Type long has a size of %zd bytes. \x0a", sizeof(long));
    printf("Type long long has a size of %zd bytes. \x0a",
           sizeof(long long));
    printf("Type long double has a size of %zd bytes. \x0a",
           sizeof(long double));
    return 0;
}
*/

/*
//3.9 程序示例
int main (void)
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;
    printf("%d\n", n, m); //参数太多
    printf("%d %d %d\n", n); // 参数太少 改为printf("%d %d %f\n", n, m, f);
    printf("%d %d\n",f ,g); //参数类型不符 printf("%f %f\n",f ,g);

}
*/

/*
//3.10 程序示例
int main (void)
{
    float salary;
    printf("\aEnter your desired monthly salary:");
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t\t$%.2f a month is $%.2f a year.",
           salary, salary * 12.0);
    printf("\rGee");
    return 0;
}
*/

/*
//关于字符型int显示及8进制和16进制转义为ascii说明
int main (void)
{
    char ch, ch1, ch2, ch3;
    ch = 'A';
    ch1 = 65;
    ch2 = 0101;
    ch3 = 0x41;
    printf("%c %c %c %c\n",ch , ch1, ch2, ch3);
    printf("%c %d %#o %#x\n", 'A');
    printf("\x41 \07777 \n");// 显示一个A ?77 \07777被识别为 \077 ? 后面77超出转义打印77

    return 0;
}
*/
/*
//课后练习3.9
int main (void)
{
    char ch;
    //ch = '\r';
    //ch = 13;
    //ch = '\015';
    //ch = '\xd';
    printf("\r %c \015 \xd",13);
    return 0;

}

*/

/*
//课后练习3.10
int main (void) // this program is perfect
{
    int cows, legs;
    printf("How many cow legs did you count? \n");
    scanf("%d", &legs);
    cows = legs / 4;
    printf("That implies there are %d cows.\n", cows);
    return 0;

}
*/

/*
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
    num9i = -1.18e-38f;
    num9x = 3.40e38f;
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
*/

/*
//3.11编程练习2
int main (void)
{
    int ascii; //or char都行
    printf("请输入一个ascii码值我来输出字符，请输入:__\b\b");
    scanf("%d", &ascii);//必须以整型存储，%c的话只能存储第一个数字的字符 ex： 65只存字符6对应的ASCII码值
    printf("你输入的ascii码值为%d，对应的ascii字符为：%c", ascii, ascii);

    return 0;
}
*/

/*
//3.11编程练习3
int main (void)
{
    printf("\a");
    printf("Startled by the sudden sound, Sally shouted,\n");
    printf("\"By the Great Pumpkin, what was that!\"\n");
    return 0;
}
*/

/*
//3.11编程练习4
int main (void)
{
    float num1;
    printf("Enter a floating-point value: ");
    scanf("%f", &num1);
    printf("fixed-point notation: %f\nexponetial notation: %e\np notation: %a\n",
           num1, num1, num1);
    return 0;
}
*/

/*
//3.11编程练习5
int main (void)
{
    float seconds;
    float seconds_y = 3.156e7; //a year contain seconds;
    int age;
    printf("please enter your age: ");
    scanf("%f", &age);
    seconds = seconds_y * age;
    printf("your age %d are equles %.2f seconds", age, seconds);
    return 0;
}
*/

/*
//3.11编程练习6
int main (void)
{
    //mass_qt = 950;        //mass of quart of water in grams
    //mass_mol = 3.0e-23;   //mass of  water molecule in grams
    float num;
    printf("please enter the number of quarts of water: ");
    scanf("%d", &num);
    printf("the %d quarts of water contain %ewater molecules!", num, num*950/3.0e-23);
    return 0;
}
*/

/*
//3.11编程练习7
int main (void)
{
    float in_cm = 2.54; //inch to centimeter;
    float height_inch; //height in inch;
    float height_cm;
    printf("please enter your height in inch: ");
    scanf("%f", &height_inch);
    height_cm = height_inch * in_cm;
    printf("your height: %.2f inch to centimeter is: %.2f",height_inch ,height_cm);
    return 0;
}
*/
/*
//3.11编程练习8
int main (void)
{
    float pint;  // 1 pint = 2 cups
    float cup; // 1 cup = 8 ounces
    float ounce; // 1 ounces = 2 tss;
    float two_soup_spoon; //1 tss = 3 tts;
    float three_tea_spoon;
    printf("please enter the number of pint: ");
    scanf("%f", &pint);
    cup = pint / 2;
    ounce = cup / 8;
    two_soup_spoon = ounce / 2;
    three_tea_spoon = two_soup_spoon / 3;
    printf("%.2fpint = %f\tcups\n", pint, cup);
    printf("%.2fpint = %f\tounce\n", pint, ounce);
    printf("%.2fpint = %f\tsoups\n", pint, two_soup_spoon);
    printf("%.2fpint = %f\ttea spoon\n", pint, three_tea_spoon);
    return 0;
}
*/
