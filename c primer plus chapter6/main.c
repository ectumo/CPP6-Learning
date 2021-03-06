/*
//第6章 示例程序6.1
#include <stdio.h>
int main (void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an intger to be summed");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status == 1)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &sum);
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}
*/

/*
//第6章示例程序6.2
#include <stdio.h>
int main (void)
{
    int n = 5;

    while (n < 7)
    {
        printf("n = %d\n", n);
        n++;
        printf("Now n = %d\n", n);
    }
    printf("The loop has finished.\n");

    return 0;
}
*/

/*
//第6章示例程序6.3
#include <stdio.h>
int main (void)
{
    int n = 0;

    while (n < 3)
        printf("n is %d\n", n);
    n++;
    printf("That's all this program does\n");

        return 0;
}
*/

/*
//第6章示例程序6.4
#include <stdio.h>
int main (void)
{
    int n = 0;

    while (n++ < 3)
        printf("n is %d\n", n);
    printf("That's all this program does\n");

    return 0;
}
*/

/*
//第6章示例程序6.5
#include <math.h>
#include <stdio.h>
int main (void)
{
    const double ANSWER =3.14159;
    double response;

    printf("What is the walue of pi?\n");
    scanf("%lf", &response);
    while (fabs(response - ANSWER) > 0.0001) //浮点型绝对值<math.h> fabs,abs,pow()
    {
        printf("Try again！\n");
        scanf("%lf", &response);
    }
    printf("Close enough!\n");

    return 0;
}
*/

/*
//第6章示例程序6.6
//真值和假值
#include <stdio.h>
int main (void)
{
    int ture_value, false_value;
    ture_value = (10 > 2); //关系值为真
    false_value = (10 == 2); //关系值为假
    printf("ture = %d; false = %d \n", ture_value, false_value);

    return 0;
}
*/

/*
//第6章示例程序6.7
//其他真值 非0即为真
#include <stdio.h>
int main (void)
{
    int n = 3;

    while (n)
        printf("%2d is ture\n", n--);
    printf("%2d is false\n", n);
    n = -3;
    while(n)
        printf("%2d is ture\n", n++);
    printf("%2d is false\n", n);

    return 0;
}
*/

/*
//第6章 示例程序6.8
#include <stdio.h>
int main (void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an intger to be summed");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status = 1) //错误示例，本是==等于，现在是=赋值
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &sum);
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}
*/

/*
//第6章示例程序6.9
//_Bool类型引用
#include <stdio.h>
int main (void)
{
    long num;
    long sum = 0L;
    _Bool input_is_good;

    printf("Please enter an intger to be summed");
    printf("(q to quit): ");
    input_is_good = (scanf("%ld", &num)); //将scanf返回值赋值
    while (input_is_good)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        input_is_good = scanf("%ld", &sum);
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}
*/

/*
//第6章示例程序6.10
#include <stdio.h>
int main (void)
{
    const int NUMBER = 22;
    int count = -1;

    while(count <= NUMBER)
    {
        printf("Be my Valentine!\n");
        count++;
    }

    return 0;
}
*/

/*
//第6章示例程序6.11
#include <stdio.h>
int main (void)
{
    const int NUMBER = 22;
    int count;

    for (count = 1; count <= NUMBER; count++)
        printf("Be my Valentain\n");

    return 0;
}
*/

/*
//第6章示例程序6.12
//使用循环创建一个立方表
#include <stdio.h>
int main (void)
{
    int num;

    printf("    n  n cubed\n");
    for (num = 1; num < 6; num++)
        printf("%5d %5d\n", num, num*num*num);

    return 0;
}
*/

/*
//第6章示例程序
//for循环的灵活性
#include <stdio.h>
int main (void)
{
    char ch;

    for(ch = 'a'; ch <= 'z'; ch++)
        printf("The ASCII value for %c is %d.\n", ch, ch);

    return 0;
}
*/

/*
//第6章示例程序6.13
#include <stdio.h>
int main (void)
{
    const int FIRST_OZ = 46;
    const int NEXT_OZ = 20;
    int ounces, cost;

    printf(" ounces  cost\n");
    for(ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
        printf("%5d    $%4.2f\n", ounces, cost / 100.0);

    return 0;
}
*/

/*
//第6章示例程序6.14
#include <stdio.h>
int main (void)
{
    int t_ct; //项-计数
    double time, power_of_2;
    int limit;

    printf("Enter the number of terms you want: ");
    scanf("%d", &limit);
    for (time = 0, power_of_2 =1, t_ct=1; t_ct <= limit;
            t_ct++, power_of_2*=2.0)
        {
            time += 1.0 / power_of_2;
            printf("time = %f when terms = %d.\n", time, t_ct);
        }

    return 0;
}
*/

/*
//第6章示例程序6.15
#include <stdio.h>
int main (void)
{
    const int secret_code =13;
    int code_entered;

    do{
        printf("To enter the triskaidekaphobia therapy club,\n");
        printf("please eneter the secret code number: ");
        scanf("%d", &code_entered);

    }while(code_entered != secret_code);
    printf("Congratulation! You are cured!\n");

    return 0;
}
*/

/*
//第6章示例程序6.17
#include <stdio.h>
#define ROWS 6
#define CHARS 10
int main (void)
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)
    {
        for (ch = 'A'; ch < ('A'+ CHARS); ch++)
            printf("%c", ch);
        printf("\n");
    }
    return 0;
}
*/

/*
//第6章示例程序6.18
#include <stdio.h>
#define ROWS 6
#define CHARS 6
int main (void)
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)
    {
        for (ch = ('A' + row); ch < ('A'+ CHARS); ch++)
            printf("%c", ch);
        printf("\n");
    }
    return 0;
}
*/

/*
//第6章示例程序
#include <stdio.h>
#define SIZE 10
#define PAR 72
int main (void)
{
    int index, score[SIZE];
    int sum = 0;
    float average;

    printf("Enter %d golf scores: \n", SIZE);
    for (index = 0; index < SIZE; index++)
        scanf("%d",&score[index]);
    for (index = 0; index < SIZE; index++)
        printf("%d",score[index]);
    printf("\n");
    for (index = 0; index < SIZE; index++)
        sum += score[index];
    average = sum / SIZE;
    printf("Sum of scores = %d, average = %.2f\n", sum, average);
    printf("That's a handicap of %.0f.\n", average - PAR);
}
*/

/*
//第6章示例程序6.20
#include <stdio.h>
double power(double n, int p);
int main (void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number whill be raised. Enter q");
    printf(" to quit.\n");
    while (scanf("%lf%d",&x ,&exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n",x , exp, xpow);
        printf("Enter a number of number or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip --bye!\n");
}
double power(double n, int p)
{
    double pow = 1;
    int i;
    for (i = 1; i <= p; i++)
        pow *=n;
    return pow; //返回pow值
}
*/

/*
///课后练习////
//复习题6.
#include <stdio.h>
int main (void)
{
    int i,j;

    for (i=0;i<4;i++)
    {
        for (j=0;j<8;j++)
        {
            printf("$");
        }
        printf("\n");
    }

    return 0;
}
*/

/*
//复习题14
//经典例子 for循环的灵活运用~！
#include <stdio.h>
int main (void)
{
    int k;
    for(k=1,printf("%d: Hi!\n",k);printf("k = %d\n",k),
        k*k<26;k+=2, printf("Now k is %d\n",k))
    printf("k is %d in the loop\n",k);
    return 0;
}
*/


/*
//第六章练习题6.16-1
#include <stdio.h>
int main (void)
{
    char ch[26];
    int i;

    for (i = 0; i < 26; i++)
    {
        ch[i] = 'a' + i;
        printf("%c",ch[i]);
    }
    return 0;
}
*/

/*
//第6章练习题2
#include <stdio.h>
int main (void)
{
    int i,j;

    for (i = 0; i < 100; i++)
    {
        for (j = 0; j <=i ; j++)
         {
             printf("$");
         }
         printf("\n");
    }

    return 0;
}
*/

/*
//第6章练习题3
#include <stdio.h>
int main (void)
{
    int i,j;
    for(i=0;i<26;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("%c",'Z'- j);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
//第6章练习题4
#include <stdio.h>
int main (void)
{
    int i,j;
    char ch = 'A';
    for (i = 0;i<6;i++)
        {for(j=0; j<=i; j++,ch++)   ///for灵活性更新条件就是一个简单的表达式。
            printf("%c",ch );       ///for(j = 0; j <i+1; printfprintf("%c",ch ),j++,ch++);
    printf("\n");                   ///记得后面要有一条空语句;否则会循环换行
        }
    return 0;
}
*/

/*
//第6章练习题5
#include <stdio.h>
int main (void)
{
    char ch;  //改变字符打印字符金字塔
    int i,j,k;
    printf("请输入一个大写英文字母，我来负责打印三角形\n"
           "以该字母至字符A的距离为高的三角型。");
    scanf("%c",&ch);
    while (ch < 'A' || ch > 'Z')
    {
        printf("输入不符合要求请重新输入：");
        scanf("%c",&ch);
    }
    k = ch - 'A';
    for (i = 0; i <= k; printf("\n"),i++)
        {for(j = 0; j < k - i; printf(" "),j++);
         for(j = 0; j < i+1; printf("%c",ch - k + j),j++);    //ch -(k-i) 每一行从ch -k+i-1开始打印
         for(j = 0; j < i; printf("%c",ch - (k - i)-j-1),j++);//其中-1 是降序从行尾间隔多少字母开始
        }                                                     //每一列字符降序间隔为j
    return 0;
}
*/

/*
//第6章练习题6
#include <stdio.h>
int main (void)
{
    int num1,num2;
    int i;
    printf("请输入打印表格的数字上限小于100: ");
    scanf("%d",&num1);
    printf("请输入打印表格的数字下限大于0: ");
    scanf("%d",&num2);
    for (i = num2; i <= num1;printf("%-5d %-10d %-15d\n",i,i*i,i*i*i), i++);

    return 0;
}
*/

/*
//第6章练习题7
#include <stdio.h>
#include <string.h>
#define MAX 50
int main (void)
{
    char ch[MAX];
    int i = 0;
    char temp;
    int length;
    int errorcount = MAX + 1;
    ///解决输入验证，首字母必须大写A-Z其余字母小写即a-z
    printf("请输入一个单词首字母大写其余均小写：");
    scanf("%s",ch);
     /// 验证用户输入是否符合规定，不符合重新输入 ///////////////////////
    length = strlen(ch);//取字符串长度
    while (errorcount != 0 )
    {
        for (i = 0; i < length; i++)
        {
            if ( i == 0 && (ch[i]>='A' && ch[i] <='Z'))       //判断首字母是否等于为A-Z
            {
                continue;
            }
            else if ( i != 0 && (ch[i]>='a' && ch[i] <='z'))
            {
                continue;
            }
            else //输入不符合要求
            {
                printf("\n");
                printf("输入错误,不符合规定！\n");
                printf("\n请重新输入一个有效的单词：");
                printf("首字母大写其余均小写：");
                scanf("%s", ch);
                length = strlen(ch);       //重新初始化字符长度
                i = -1;                    //i = -1; 循环结束后i++ 后重新初始化i = 0,防止i >= numlen跳出循环；
            }
        }
        errorcount = 0;
    }
    /// 验证输入结束///////////////////////////////////////////////////////
    ///打印单词////////////////////////////////////
    length = strlen(ch);
    for (i = 0; i < length; i++)
    {
        printf("%c",ch[i]);
    }
    printf("\n#################\n");
    for (i = 0; i < (length / 2 + length % 2) ;i++)
    {
        temp = ch[i];
        ch[i] = ch[length-i-1];
        ch[length-i-1] = temp;
    }
    for (i = 0; i < length; i++)
    {
        printf("%c",ch[i]);
    }


    return 0;
}
*/

/*
//第6章练习题8
#include <stdio.h>
int main (void)
{
    float num1,num2;
    int status;
    printf("请输入需要计算的2个浮点数\n");
    printf("输入格式为1.111空格1.111\n");
    printf("输入非数字退出：");
    status = scanf("%f %f",&num1,&num2);
    while(status!=0)
    {
        //printf("浮点数1与浮点数2的差为：%lf\n",num1-num2);
        //printf("浮点数1与浮点数2的积为：%lf\n",num1*num2);
        printf("差除以积的结果为：%lf\n",(num1-num2)/(num1*num2));
        printf("#############################################\n");
        printf("请输入需要计算的2个浮点数\n");
        status = scanf("%f %f",&num1,&num2);
    }
    fflush(stdin);
    printf("按任意键程序退出\n");
    getchar();
    return 0;
}
*/

/*
//第6章练习题9
#include <stdio.h>
float math1 (float n1, float n2); //math1 2个数的差除以他们乘积的商。
int main (void)
{
    float num1,num2;
    int status;
    printf("请输入需要计算的2个浮点数\n");
    printf("输入格式为1.111空格1.111\n");
    printf("输入错误或按q退出：");
    status = scanf("%f %f",&num1,&num2);
    while(status!=0)
    {
        printf("差除以积的结果为：%lf\n",math1(num1,num2));
        printf("#############################################\n");
        printf("请输入需要计算的2个浮点数\n");
        status = scanf("%f %f",&num1,&num2);
    }
    fflush(stdin);
    printf("按任意键程序退出\n");
    getchar();


    return 0;
}
float math1 (float n1, float n2)
{
    float result1;
    result = (n1-n2)/(n1*n2);
    return result1;
}
*/

/*
//第6章练习题10
#include <stdio.h>
int math2 (int n1,int n2); //math2 计算整数n1至n2范围内(含n1、n2)所有平方的和
int main (void)
{
    int num1,num2;
    int status;

    printf("请输入2个整数先输入下限然后输入上限：\n");
    printf("正确格式2空格99\n");
    printf("上限小于下限时退出\n");
    status = scanf("%d %d", &num1, &num2);
    while ((status != 0) && (num2 > num1))
    {
        printf("数字的平方从 %d 到 %d 的平方和为：%d\n",num1*num1,num2*num2,math2(num1,num2));
        printf("#############################################\n");
        printf("请再次输入下限和上限：\n");
        status = scanf("%d %d", &num1, &num2);
    }
    fflush(stdin);
    printf("按任意键程序退出\n");
    getchar();

    return 0;
}
int math2(int n1,int n2)
{
    int result2 = 0;
    int i;
    for (i = n1; i<= n2; i++)
    {
        result2 += i*i;
    }
    return result2;
}
*/

/*
//第6章练习题11
/// //////////////////////////////////
///输入NUMLEN个整型数字存放于数组中///
///需要校验输入，然后逆序排列并打印///
/// //////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUMLEN 8
void printnums (int *ptr,int numslen);//根据int类型数组指针，int类型数组长度，将数组倒序打印
int main (void)
{
    int nums[NUMLEN];
    int status;
    int * ptrnums;
    int i;
    ///输入int数组/////////////
    for (i = 0; i < NUMLEN; i++)
    {
        printf("请输入一个整数：");
        status=scanf("%d",&nums[i]);
        while (status==0)//通过scanf函数返回值校验输入是否符合转义序列的要求。
        {
            fflush(stdin);//清空输入缓存区，避免输入其他字符导致无限循环。
            printf("输入错误请再次输入：");
            status=scanf("%d",&nums[i]);
        }

    }
    ptrnums = nums;//将指针地址指向nums
    printnums(ptrnums,NUMLEN);//调用函数打印数组

    return 0;
}

void printnums (int *ptrs,int numslen)
{
    int i;
    int temp;

    printf("输入的数组为：  ");
    for (i = 0; i < numslen; i++)
        printf("%d ",*(ptrs+i));
    printf("\n");
    for (i = 0; i < numslen / 2 + numslen % 2; i++)//考虑序列为奇数或偶数的不同情况。
    {
        temp = *(ptrs + i);
        *(ptrs + i) = *(ptrs + numslen - 1 - i);//numslen-1对应第i+1个元素8-1+1第8个元素
        *(ptrs + (numslen - 1 -i)) = temp;
    }
    printf("调整后的数组为：");
    for (i = 0; i < numslen; i++)
        printf("%d ",*(ptrs+i));
    printf("\n");
}
*/

/*
//第6章练习题12
/// ////////////////////////////////////////
///计算2个无限循环序列总和,让用户输入100,///
///1000,10000项后的总和，输入0或负数退出 ///
///  1.0+1.0/2.0+1.0/3.0+1.0/4.0+...     ///
///  1.0-1.0/2.0+1.0/3.0-1.0/4.0+...     ///
/// ////////////////////////////////////////
#include <stdio.h>
int main (void)
{
    double i;
    int j;
    int times;
    double result1=0.0;
    double result2=0.0;
    printf("请输入需要循环的次数小于0退出:");
    scanf("%d",&times);
    while (times > 0 )
    {
    for (i = 0; i < times; i++)
    {if ((int)i%2 == 0)
     {j=1;}
     else{j=-1;}

    result1 += 1.0/(1.0 + i);
    result2 +=(double)j/(1.0 + i);
    printf("当前第%-5d轮循环，循环1为%.1lf/%-5.1lf\t结果为：%-6lf  ##  循环2为%.1lf/%-5.1lf\t结果为：%-6lf\n",
           (int)i+1,1.0,1.0 + i,result1,(double)j,1.0+i,result2);
    }
    printf("请再次输需要循环的次数小于0退出:");
    scanf("%d",&times);
    }
    printf("程序结束！");

    return 0;
}
*/

/*
//第6章练习题13
int power (int n1,int n2);
int main (void)
{
    int i;
    int nums[8];
    for (i = 0; i < 8; i++)
    {
        nums[i] = power(2,i+1);
    }
    i=0;
    do
    {
     printf("%d ",nums[i]);
    }while(++i<8);
    return 0;
}
int power (int n1,int n2)
{
    int results=1;
    int i;
    for(i=1;i<=n2;i++)
        results*=n1;
    return results;
}
*/

/*
//第6章课后练习14
#include <stdio.h>
#define LEN 8
int main (void)
{
    double nums1[LEN];
    double nums2[LEN];
    double sums = 0L;
    int i;
    printf("请输入double数组1：");
    for (i = 0; i < LEN; i++)
    {
        scanf("%lf", &nums1[i]);
        sums += nums1[i];
        nums2[i] = sums;
    }

        printf("数组1的值为：\n");
    for (i = 0; i < LEN; i++)
        printf("[%.2lf]\t",nums1[i]);
    printf("数组2的值为：\n");
    for (i = 0; i < LEN; i++)
        printf("[%.2lf]\t",nums2[i]);

    printf("程序结束\n");

    return 0;
}
*/

/*
//第6章练习题15
#include <stdio.h>
#include <string.h>
int main (void)
{
    char chs[255];
    int i=0;
    int index;
    printf("请输入一串字符：");
    for (i=0;i<255;i++)
        {
            scanf("%c",&chs[i]);
            if(chs[i]=='\n')
                {index=i;
                break;}
        }
    printf("输入字符为\n[");
    for (i=0;i<index;i++)
      printf("%c",chs[i]);
    printf("]\n逆序输出为\n[");
    for (i=index-1;i>=0;i--)
        printf("%c",chs[i]);
    printf("]\n");

    return 0;
}
*/

/*
//第6章练习题16
#include <stdio.h>
int main (void)
{
    const double DALX = 0.1;    //利息10%
    const double DELX = 0.05;   //利息5%
    double Daphne = 100.0;
    double Deirdre = 100.0;
    int years = 1;

    while(Deirdre <= Daphne)
        {
            Daphne += 100.0 * DALX;
            Deirdre *= 1 + DELX;
            //printf("Deirdre的投资额为：%.2lf Daphne的投资额为：%.2lf\n", Deirdre, Daphne);
            years++;
        }
    printf("当第%d年时 Deirdre的投资额超过Daphne\n",years);
    printf("Deirdre的投资额为：%.2lf Daphne的投资额为：%.2lf\n", Deirdre, Daphne);

    return 0;
}
*/

/*
//第6章练习题17
#include <stdio.h>
int main (void)
{
    const double LX = 0.08;
    double Lucky = 1000000.0;
    int years = 1;
    while (Lucky > 0)
    {
        Lucky = Lucky + Lucky * LX - 100000.0;
        //printf("Lucky当前余额为：%.2lf\n", Lucky);
        years ++;
    }
    printf("当第%d年时 Lucky的钱取完\n", years);
    printf("Lucky当前余额为：%.2lf\n", Lucky);
    return 0;
}
*/

/*
//第6章练习题18
#include <stdio.h>
int main (void)
{
    const int DBNUM = 150;
    int weeks = 1;
    int friends = 5;
    while (friends <= DBNUM)
    {
        friends = (friends - weeks)*2;
        printf("当前第[%d]周 朋友圈数量为：%d\n", weeks, friends);
        weeks++;
    }

    return 0;
}
*/
