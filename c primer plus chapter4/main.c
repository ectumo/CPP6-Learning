#include <stdio.h>
#include <string.h> //提供strlen(函数原型)
/*
//第4章 示例程序4.1
#define DENSITY 62.4 //人体密度（单位： 磅/立方英尺）
int main (void)
{
    float weight, volume;
    int size, letters;
    char name[40]; //name是一个可容纳40个字符的数组
    printf("Hi! What's your first name?\n");
    scanf("%s", name);
    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well, %s, your volume is % 2.2f cubic feet.\n",
           name, volume);
    printf("Also, your first name has %d letters,\n",
           letters);
    printf("and we have %d bytes to store it.\n", size);
    return 0;
}
*/
/*
//第4章 示例程序 4.2
#define PRAISE "You are an extraordinary bing"
int main (void)
{
    char name[40];
    printf("What's your names?");
    scanf("%s",name);
    printf("Hello, %s. %s.\n", name, PRAISE);
    return 0;
}
*/
/*
//第4章 示例程序 4.3
#include <string.h>
#define PRAISE "You are an extraordinary being."
int main (void)
{
    char name[40];
    printf("What's your name?");
    scanf("%s",name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n",
           strlen(name), sizeof name); //对于类型sizeof需要用(),而对于特定量可有可无；
    printf("The phrase of praise has %zd letters",
           strlen(PRAISE));
    printf("and occupies %zd memory cells.\n", sizeof PRAISE);
    return 0;
}
*/

/*
//第4章 示例程序4.4
#define PI 3.14159
int main (void)
{
    float area, circum, radius;
    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area); //%1.2f .2表示四舍五入取2位小数。
    return 0;
}
*/

/*
//第4章 示例程序4.5 头文件明示常量调用
#include <limits.h>
#include <float.h>
int main (void)
{
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n", INT_MAX);
    printf("Smallest long long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system\n", CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("float precision = %d\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);


    return 0;
}
*/
/*
//第4章 示例程序4.6 明示常量使用
#define PI 3.141593
int main (void)
{
    int number = 7;
    float pies = 12.75;
    int cost = 7800;
    printf("The %d contestants ate %f berry pies.\n",number, pies);
    printf("Farewell! thou art too dear for my possessing,\n");
    printf("%c%d\n", '$', 2 * cost);

    return 0;
}
*/

/*
//第4章 示例程序4.7 整型数
#define PAGES 959
int main (void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);

    return 0;
}
*/

/*
//第4章 示例程序4.8 浮点数
int main (void)
{
    const double RENT = 3852.99;
    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);
    return 0;
}
*/

/*
//第4章 示例程序4.9 标识符运用
int main (void)
{
    printf("%x %X %#x\n", 31, 31, 31);
    printf("**%d**% d**% d**\n", 42, 42, -42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
    return 0;
}
*/

/*
//第4章 示例程序4.10 字符串
#define BLURB "Authentic imitation!"
int  main (void)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n",BLURB);
    printf("[%24.5s]\n",BLURB);
    printf("[%-24.5s]\n",BLURB);
    return 0;
}
*/

/*
//第4章 示例程序 page87
#define NAME "Zhu Lin"
int main (void)
{
    printf("The %s family just may be $%.2f dollars richer!\n", NAME, 9.999);
    return 0;
}
*/

/*
//第4章 示例程序4.11
#define PAGES 336
#define WORDS 65618
int main (void)
{
    short num = PAGES;
    short mnum = -PAGES;
    printf("nums as short and unsigned short:  %hd %hu\n", num, num);
    printf("-nums as short and unsigned short:  %hd %hu\n", mnum, mnum);
    printf("num as int and char:  %d %c\n", num, num);
    printf("WORDS as int, short, and char:  %d %hd %c\n", WORDS, WORDS, WORDS);
    return 0;
}
*/

/*
//第4章 示例程序4.12
int main (void)
{
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;
    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
    printf("%ld %ld\n", n3, n4);
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
    return 0;
}
*/

/*
//第4章 示例程序4.13
int main (void)
{
    int bph2o = 212;
    int rv;
    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printed %d characters.\n", rv);
    return 0;
}
*/

/*
//第4章 示例程序4.14
int main (void)
{
    printf("here is one way to  print a");
    printf("long string\n");                //方法一，调用一个新的printf()函数
    printf("here is another way to print a \
long string\n");                            //方法二，利用反斜杠\，但第二行必须从行首开始书写
    printf("here is the newest way to print a "
           "long string");                  //方法三，利用一对双引号分割 参照ANSI C
    return 0;
}
*/

/*
//第4章 示例程序4.15
int main (void)
{
    int age;
    float assets;
    char pet[30];
    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;
}
*/

/*
//第4章 示例程序4.16
int main (void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d", &width);
    printf("The number is :%*d:\n", width, number);
    printf("Now Enter a width and a precision:\n");
    scanf("%d %d",&width ,&precision);
    printf("Weight = %*.*f\n", width, precision, weight);
    printf("Done!\n");
    return 0;
}
*/

/*
//第4章 示例程序4.17
int main (void)
{
    int n;
    printf("Please Enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last intger was %d\n", n);
    return 0;
}
*/

/*
//第4章 复习题 4
#define B "booboo"
#define X 10
int main (void)
{
    int age, xp;
    char name[40];
    printf("Please enter your first name.\n");
    scanf("%s", name);
    printf("All right %s what's your age?\n", name);
    scanf("%d", &age);
    xp = age + X;
    printf("That's a %s! You mast be at leat %d.\n", B, xp);
    return 0;
}
*/

/*
//第4章 复习题5
#define BOOK "War and Peace"
int main (void)
{
    float cost = 12.99;
    float percent = 80.0;
    printf("This copy of \"%s\" sells for $%.2f.\n"
            "That is %.f%% of list.\n", BOOK, cost, percent);
    return 0;
}
*/

/*
//第4章 复习题9
int main (void)
{
  int num1;
  scanf("%d", &num1);
  printf("%d\n", num1);
  float num2, num3;
  scanf("%f %E", &num2, &num3);
  printf("%.2f %.2E", num2, num3);
  char name[20];
  scanf("%s", name);
  printf("%s", name);
  char words[20];
  int num4;
  scanf("%s %d", words, &num4);
  printf("%s %d", words, num4);
  scanf("%*s %d", &num4);
  printf("%d", num4);
  return 0;
}
*/

/*
//第4章 练习题1
int main (void)
{
    char name_f[40]; //姓
    char name_l[40]; //名
    printf("请输入您的名：");
    scanf("%s", name_l);
    printf("请输入您的姓：");
    scanf("%s", name_f);
    printf("%s,%s\n", name_l, name_f);
    return 0;
}
*/

/*
//第4章 练习题2
//#include <string.h>
//#include <stdio.h>
int main (void)
{
    char name_f[40]; //姓
    char name_l[40]; //名
    printf("请输入您的名：");
    scanf("%s", name_l);
    printf("请输入您的姓：");
    scanf("%s", name_f);
    printf("\"%s%s\"\n", name_l, name_f);
    printf("\"%*s%s\"\n", 20 - strlen(name_f), name_l, name_f); //右对齐姓名一共限定20个字符宽度，因此要减掉姓的宽度
    printf("\"####################\"\n");//测试用在20个#字符内校对
    printf("\"%s%*s\"\n", name_l, strlen(name_l) - 20, name_f);//左对齐姓名一共限定20个字符宽度，因此要减掉名的宽度
    printf("\"####################\"\n");//测试用在20个#字符内校对
    printf("\"%*s%s\"\n", strlen(name_l) + 3, name_l, name_f);//右对齐比姓名总共占的字符宽度增加3，因此要增加名的宽度

    return 0;
}
*/

/*
//第4章 练习题3
//#include <stdio.h>
int main (void)
{
    float num1, num2;
    printf("请输入2个浮点数：");
    scanf("%g %G", &num1, &num2); //用%g 转义自动识别%f和%e 用%G 自动识别%f和%E
    printf("你输入的第一个浮点数为：%.1f 或 %.1e;\n", num1, num1);
    printf("你输入的第二个浮点数为：%+.3f 或 %+.3E;\n", num2, num2);

    return 0;
}
*/

/*
//第4章 练习题4
//#include <stdio.h>
//#include <string.h>
int main (void)
{
    float hight; //单位厘米
    char fname[40];
    char lname[40];
    printf("请输入您的姓氏:");
    scanf("%s", fname);
    printf("请输入您的名：");
    scanf("%s", lname);
    printf("请输入您的身高：");
    scanf("%f", &hight);
    printf("%s%s你的身高是%.2f厘米即%.2f米\n", fname, lname, hight, hight / 100);

    return 0;
}
*/

/*
//第4章 练习题5
//#include <stdio.h>
int main (void)
{
    float speed; //下载速度 单位Mbit
    float dtime; //下载时间 单位秒
    float fsize; //文件大小 单位Mbyte
    int hous, mins, secs, temp; //时 分 秒 临时
    printf("请输入下载速度单位：兆比特/每秒");
    scanf("%f", &speed);
    printf("请输入要下载的文件大单位：兆字节");
    scanf("%f", &fsize);
    dtime = fsize / speed * 1000;
    temp = dtime;
    hous = temp / 3600;
    mins = (temp % 3600) / 60;
    secs = (temp % 3600) % 60;
    printf("下载速度为：%.2f Mb/s，文件大小为：%.2f MB\n"
           "下载所需时间为：%.2f 秒 等效于 %.2d时%.2d分%.2d秒\n", speed, fsize, dtime, hous, mins, secs);

    return 0;
}
*/

/*
//第4章 练习题6
//#incldue <stdio.h>
//#incldue <string.h>
int main (void)
{
    char fname[40];
    char lname[40];
    printf("请输入您的名：");
    scanf("%s", lname);
    printf("请输入您的姓氏:");
    scanf("%s", fname);
    printf("%s %s\n", lname, fname);
    printf("%*d %*d\n", strlen(lname), strlen(lname), strlen(fname), strlen(fname));
    printf("%s %s\n", lname, fname);
    printf("%-*d %-*d\n", strlen(lname), strlen(lname), strlen(fname), strlen(fname));
    return 0;
}
*/

/*
//第4章 练习题7
//#include <stdio.h>
#include <float.h>
int main (void)
{
    double num1 = 1.0 / 3.0;
    float num2 = 1.0 / 3.0;
    long double num3 = 1.0 / 3.0;
    printf("num1为：%-22.6lf num2为：%.6f \n", num1, num2);
    printf("num1为：%-22.12lf num2为：%.12f \n", num1, num2);
    printf("num1为：%-22.16lf num2为：%.16f \n", num1, num2);
    printf("num1的浮点精度为：%-12d num2的浮点精度为：%d\n", DBL_DIG, FLT_DIG);
    printf("num1为：%-22.19lf num3为：%.19Lf \n", num1, num3); //long double 转换说明 %Lf %Le %LE
    printf("num1的浮点精度为：%-12d num3的浮点精度为：%d\n", DBL_DIG, LDBL_DIG);
    return 0;
}
*/

/*
//第4章 练习题8
//#incldue <stdio.h>
#define GTL 3.785 //加仑转升
#define MTK 1.609 //英里转公里
int main (void)
{
    float miles;
    float petrol;
    float petr_con; //耗油量petrol consumption
    printf("请输入旅行的路程的英里数：");
    scanf("%f", &miles);
    printf("请输入旅行消耗汽油的加仑数：");
    scanf("%f", &petrol);
    petr_con = miles / petrol;
    printf("你总共行驶了%.1f英里，消耗了%.1f加仑的汽油，每加仑行驶的英里数为：%.1f\n"
           , miles, petrol, petr_con);
    miles = miles * MTK;
    petrol = petrol * GTL;
    petr_con = petrol / miles * 100;
    printf("你总共行驶了%.1f公里，消耗了%.1f升的汽油，每100公里的油耗为：%.1f升/100公里\n"
           , miles, petrol, petr_con);
    return 0;
}
*/
