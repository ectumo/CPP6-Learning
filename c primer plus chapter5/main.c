
/*
//第5章 示例程序5.1
#include <stdio.h>
#define ADJUST 7.31
int main(void)
{
    const double SCALE = 0.333; //const 变量
    double shoe, foot;
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe Size (men's)    foot length\n");
    printf("%10.1f %15.2f inches \n", shoe, foot);

    return 0;
}
*/

/*
//第5章 示例程序5.2
#include <stdio.h>
#define ADJUST 7.31
int main (void)
{
    const double SCALE = 0.333;
    double shoe, foot;
    printf("Shoe size (men's)    foot length\n");
    shoe = 3.0;
    while (shoe < 18.5)
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inches \n", shoe, foot);
        shoe = shoe + 1.0;
    }
    printf("If the shoe fits, wear it.\n");

    return 0;
}
*/

/*
//第5章 示例程序5.3
#include <stdio.h>
int main (void)
{
    int jane, tarzan, cheeta;
    cheeta = tarzan = jane = 68;
    printf("                    cheeta   tarzan  jane\n");
    printf("First round score %4d %8d %8d\n",
           cheeta, tarzan, jane);

    return 0;
}
*/

/*
//第5章 示例程序5.4
#include <stdio.h>
int main (void)
{
    int num = 1;
    while (num < 21)
    {
        printf("%4d %6d\n", num, num * num);
        num = num + 1;
    }

    return 0;
}
*/

/*
//第5章 示例程序5.5
#include <stdio.h>
#define SQUARES 64  //棋盘中的方格数
int main (void)
{
    const double CROP = 2E16;  //世界小麦年产谷粒数
    double current, total;
    int count = 1;
    printf("square   grains       total        ");
    printf("fraction of \n");
    printf("         added        grains       ");
    printf("world total\n");
    total = current = 1.0;  //从1颗鼓励开始
    printf("%4d %13.2e %12.2e %12.2e\n", count, current,
            total, total / CROP );
    while (count < SQUARES)
    {
        count = count + 1;
        current = 2.0 * current;
        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e\n", count, current,
                total, total / CROP );
    }
    printf("That's all\n");
    return 0;
}
*/

/*
//第5章 示例程序5.6
#include <stdio.h>
int main (void)
{
    printf("integer divison 5/4   is %d\n", 5 / 4);
    printf("integer divison 6/3   is %d\n", 6 / 3);
    printf("integer divison 7/4   is %d\n", 7 / 4);
    printf("float divison   7./4. is %1.2f\n", 7. / 4.);
    printf("mixed divison   7./4  is %1.2f\n", 7. / 4);

    return 0;
}
*/

/*
//第5章 示例程序5.7
#include <stdio.h>
int main (void)
{
    int top, score;

    top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    printf("top = %d, score = %d\n", top, score);

    return 0;
}
*/

/*
//第5章 示例程序5.8
#include <stdio.h>
int main (void)
{
    int n = 0;
    size_t intsize;

    intsize = sizeof (int);
    printf("n = %d, n has %zd bytes; all ints have %zd  bytess.\n",
           n, sizeof n, intsize);

    return 0;
}
*/

/*
//第5章 示例程序5.9
#include <stdio.h>
#define SEC_PER_MIN 60  //1分钟60秒
int main (void)
{
    int sec, min, left;
    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<=0 to quit):\n");
    scanf("%d", &sec);
    while (sec > 0)
    {
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        printf("%d seconds is %d minutes, %d seconds.\n",
               sec, min, left);
        printf("Enter next value (<=0 to quit):\n");
        scanf("%d", &sec);
    }
    printf("Done!\n");

    return 0;
}
*/

/*
//第5章 示例程序5.10
#include <stdio.h>
int main (void)
{
    int ultra = 0, super = 0;

    while (super < 5)
    {
        super++;
        ++ultra;
        printf("super = %d, ultra = %d \n", super, ultra);
    }

    return 0;
}
*/

/*
//第5章 示例程序5.11
#include <stdio.h>
int main (void)
{
    int a = 1, b = 1;
    int a_post, pre_b;
    a_post = a++;
    pre_b = ++b;
    printf("a  a_post   b   pre_b \n");
    printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);

    return 0;
}
*/

/*
//第5章 示例程序5.12
#include <stdio.h>
#define MAX 100
int main (void)
{
    int count = MAX + 1;

    while (--count > 0){
        printf("%d bottles of spring water one the wall,"
                "%d bottles of spring water!\n", count, count);
        printf("Take one down and pass it around, \n");
        printf("%d bottles of spring water!\n\n", count - 1);
    }

    return 0;
}
*/

/*
//第5章 示例程序5.13
#include <stdio.h>
int main (void)
{
    int count, sum;             //声明

    count = 0;                  //赋值表达式语句
    sum = 0;                    //赋值表达式语句
    while (count++ < 20)        //迭代语句
        sum = sum + count;
    printf("sum = %d\n", sum);  //函数调用表达式语句

    return 0;                   //跳转语句
}
*/

/*
//第5章 示例程序5.14
#include <stdio.h>
int main (void)
{
    char ch;
    int i;
    float fl;

    fl = i = ch = 'C';
    printf("ch = %c, i = %d, fl = %.2f\n", ch, i, fl);
    ch = ch + 1;
    i = fl + 2 * ch;
    fl = 2.0 * ch + i;
    printf("ch = %c, i = %d, fl = %.2f\n", ch, i, fl);
    ch = 1107;
    printf("Now ch = %c\n", ch);
    ch = 80.89;
    printf("Now ch = %c\n", ch);

    return 0;
}
*/

/*
//第5章 示例程序5.15
#include <stdio.h>
void pound (int n); //ANSI函数原型声明
int main (void)
{
    int times = 5;
    char ch = '!';  //ASCII码值是33
    float  f = 6.0f;

    pound(times);  //int 类型参数
    pound(ch);     //和pound((int) ch);相同
    pound(f);      //和pound((int) f);相同

    return 0;
}
void pound (int n) //ANSI风格函数头
{                  //表明该函数接受一个int类型的参数
    while (n-- > 0)
        printf("#");
    printf("\n");
}
*/

/*
//第5章 示例程序5.16
#include <stdio.h>
const int S_PER_M = 60;         //1分钟的秒数
const int S_PER_H = 3600;       //1小时的秒数
const double M_PER_K = 0.62137; //1公里的英里数

int main (void)
{
    double distk, distm;        //跑过的距离(分别以英里和公里为单位)
    double rate;                //平均速度(以英里/小时为单位)
    int min, sec;               //跑步用时(以分钟和秒为单位)
    int time;                   //跑步用时(以秒为单位)
    double mtime;               //跑1英里需要的时间，以秒为单位
    int mmin, msec;             //跑1英里需要的时间，以分钟和秒为单位

    printf("This program converts your time for a metric race\n");
    printf("to a time for running a mile and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please enter, in kilometers, the distance run.\n");
    scanf("%lf", &distk);
    printf("Next enter the time in minutes and seconds.\n");
    printf("Begin by entering the minutes.\n");
    scanf("%d", &min);
    printf("Now enter the seconds.\n");
    scanf("%d", &sec);

    time = S_PER_M * min + sec;         //把时间转换成秒
    distm = M_PER_K * distk;            //把公里转换成英里
    rate = distm / time * S_PER_H;      //英里/秒*秒/小时 = 英里小时
    mtime = (double) time / distm;      //时间/距离 = 跑1英里所用时间
    mmin = (int) mtime / S_PER_M;       //求出分钟数
    msec = (int) mtime % S_PER_M;       //求出余下的秒数

    printf("You ran %1.2f km (%1.2f miles) in % d min, %d sec.\n",
            distk, distm, min, sec);
    printf("That pace corresponds to running a mile in %d min, ",
            mmin);
    printf("%d sec.\nYour average speed was %1.2f mph.\n", msec,
            rate);

    return 0;
}
*/

/*
//第5章 复习题6
#include <stdio.h>
#define FORMAT "%s! is cool!\n"
int main (void)
{

    printf(FORMAT,FORMAT); //printf("%s! is cool!\n",FORMAT)
    return 0;
}
*/

/*
//第5章 复习题9
#include <stdio.h>
#define TEN 10
int main (void)
{
    int n = 0;
    while (n++ < TEN - 3)
        printf("%5c", n + 96);
    printf("\n");

    return 0;
}
*/

/*
//第5章 练习题1
#include <stdio.h>
const int CHNUM = 60;       //转换数1分钟等于60秒，1个小时等于60分钟
int main (void)
{
    int inputsec, hour, min, sec; //小时，分钟，秒 可根据需要调整类型
    printf("请输入秒数(<=0程序退出：\n");
    scanf("%d", &inputsec);
    while (inputsec > 0)
    {
        printf("\n你输入的时间为：%d秒\n", inputsec);
        hour = inputsec / (CHNUM * CHNUM);
        min = inputsec % (CHNUM * CHNUM) / CHNUM;
        sec = inputsec % CHNUM;
        printf("转换后的时间为：%.2d小时%.2d分钟%.2d秒。\n", hour, min, sec);
        printf("请再次输入秒数(<=0程序退出：\n");
        scanf("%d", &inputsec);
    }
    printf("程序退出！\n");

    return 0;
}
*/

/*
//第5章 练习题2
#include <stdio.h>
int main (void)
{
    int num;
    int count = 0;
    printf("请输入一个整数：");
    scanf("%d", &num);
    while (count < 10)
        {
            printf("第%d个数为%d\n", count + 1, num + count);
            count++;
        }
    printf("打印结束！\n");

    return 0;
}
*/

/*
//第5章 练习题3
#include <stdio.h>
const int DTW = 7;  //7天等于1周
int main (void)
{
    int iptdays, days, weeks; //输入天数，天数，星期，
    printf("请输入天数：\n");
    scanf("%d", &iptdays);
    weeks = iptdays / DTW;
    days = iptdays % DTW;
    printf("你输入的天数是%d,转换后为%.2d周%.1d天。\n", iptdays, weeks, days);
    printf("打印结束！\n");

    return 0;
}
*/

/*
//第5章 练习题4
#include <stdio.h>
const double CMTIN = 0.3937;     //厘米到英寸
const int FTTIN = 12;            //1英尺等于12英寸

int main (void)
{
    double cmheight, inheight, chinheight; //身高厘米，身高英寸, 转换剩余英寸
    int chftheight;                        //转换后英尺

    printf("Enter a height in centimeters：");
    scanf("%lf", &cmheight);
    while (cmheight > 0)
    {

        inheight = cmheight * CMTIN;
        chftheight = inheight / 12;
        chinheight = inheight - chftheight * 12;
        cmheight = (int)cmheight; //截断小数并以浮点方式显示
        printf("%.1lf cm = %d feet, %.1lf inches\n", cmheight, chftheight, chinheight);
        printf("Enter a height in centimeters (<=0 to quit)：");
        scanf("%lf", &cmheight);
    }
    printf("bye\n");

    return 0;
}
*/

/*
//第5章 练习题5
#include <stdio.h>
int main (void)
{
    int days;
    int count = 0;
    int sum = 0;

    printf("请输入赚钱的天数：");
    scanf("%d", &days);
    while (count++ < days)
        sum = sum + count;
    printf("你总共赚了$%d\n", sum);

    return 0;
}
*/

/*
//第5章 练习题6
#include <stdio.h>
int main (void)
{
    int days;
    int count = 0;
    int sum = 0;

    printf("请输入赚钱的天数：");
    scanf("%d", &days);
    while (count++ < days)
        sum = sum + count * count;
    printf("你总共赚了$%d\n", sum);

    return 0;
}
*/

/*
//第5章 练习题7
#include <stdio.h>
void cube (double n);
int main (void)
{
    double num;
    printf("请输入一个数: ");
    scanf("%lf", &num);
    cube(num);

    return 0;
}
void cube (double n)
{
    printf("立方为：%lf", n * n * n);
}
*/

/*
//第5章 练习题8
#include <stdio.h>
int main (void)
{
    const int SECOPRAND;
    int operand;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &SECOPRAND);
    printf("Now enter the first operand: ");
    scanf("%d", &operand);
    while (operand > 0)
    {
        printf("%d %% %d is %d\n", operand, SECOPRAND, operand % SECOPRAND);
        printf("Enter next number for first operand: ");
        scanf("%d", &operand);
    }
    printf("Done\n");

    return 0;
}
*/

/*
//第5章 练习题9
#include <stdio.h>
void Temperatures (double Tmper);
int main (void)
{
    double ftemperature; //华氏温度
    int rnum;   //scanf()函数的返回值
    printf("请输入一个华氏温度值：");
    rnum = scanf("%lf", &ftemperature);
    while (rnum == 1)
    {
        Temperatures(ftemperature);
        printf("请输入一个华氏温度值：");
        rnum = scanf("%lf", &ftemperature);
    }
    printf("输入错误程序退出！");

    return 0;
}
void Temperatures(double Tmper)
{
    const double FTC = 5.0 / 9.0 * (Tmper - 32.0);
    const double CTK = FTC + 273.16;
    printf("华氏温度为：%.3lfF\n摄氏温度为：%.3lfC\n开氏温度为：%.3lfK\n",
           Tmper, FTC, CTK);

}
*/
