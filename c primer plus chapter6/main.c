/*
//��6�� ʾ������6.1
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
//��6��ʾ������6.2
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
//��6��ʾ������6.3
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
//��6��ʾ������6.4
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
//��6��ʾ������6.5
#include <math.h>
#include <stdio.h>
int main (void)
{
    const double ANSWER =3.14159;
    double response;

    printf("What is the walue of pi?\n");
    scanf("%lf", &response);
    while (fabs(response - ANSWER) > 0.0001) //�����;���ֵ<math.h> fabs,abs,pow()
    {
        printf("Try again��\n");
        scanf("%lf", &response);
    }
    printf("Close enough!\n");

    return 0;
}
*/

/*
//��6��ʾ������6.6
//��ֵ�ͼ�ֵ
#include <stdio.h>
int main (void)
{
    int ture_value, false_value;
    ture_value = (10 > 2); //��ϵֵΪ��
    false_value = (10 == 2); //��ϵֵΪ��
    printf("ture = %d; false = %d \n", ture_value, false_value);

    return 0;
}
*/

/*
//��6��ʾ������6.7
//������ֵ ��0��Ϊ��
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
//��6�� ʾ������6.8
#include <stdio.h>
int main (void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an intger to be summed");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status = 1) //����ʾ��������==���ڣ�������=��ֵ
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
//��6��ʾ������6.9
//_Bool��������
#include <stdio.h>
int main (void)
{
    long num;
    long sum = 0L;
    _Bool input_is_good;

    printf("Please enter an intger to be summed");
    printf("(q to quit): ");
    input_is_good = (scanf("%ld", &num)); //��scanf����ֵ��ֵ
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
//��6��ʾ������6.10
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
//��6��ʾ������6.11
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
//��6��ʾ������6.12
//ʹ��ѭ������һ��������
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
//��6��ʾ������
//forѭ���������
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
//��6��ʾ������6.13
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
//��6��ʾ������6.14
#include <stdio.h>
int main (void)
{
    int t_ct; //��-����
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
//��6��ʾ������6.15
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
//��6��ʾ������6.17
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
//��6��ʾ������6.18
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
//��6��ʾ������
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
//��6��ʾ������6.20
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
    return pow; //����powֵ
}
*/

/*
///�κ���ϰ////
//��ϰ��6.
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
//��ϰ��14
//�������� forѭ�����������~��
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
//��������ϰ��6.16-1
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
//��6����ϰ��2
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
//��6����ϰ��3
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
//��6����ϰ��4
#include <stdio.h>
int main (void)
{
    int i,j;
    char ch = 'A';
    for (i = 0;i<6;i++)
        {for(j=0; j<=i; j++,ch++)   ///for����Ը�����������һ���򵥵ı���ʽ��
            printf("%c",ch );       ///for(j = 0; j <i+1; printfprintf("%c",ch ),j++,ch++);
    printf("\n");                   ///�ǵú���Ҫ��һ�������;�����ѭ������
        }
    return 0;
}
*/

/*
//��6����ϰ��5
#include <stdio.h>
int main (void)
{
    char ch;  //�ı��ַ���ӡ�ַ�������
    int i,j,k;
    printf("������һ����дӢ����ĸ�����������ӡ������\n"
           "�Ը���ĸ���ַ�A�ľ���Ϊ�ߵ������͡�");
    scanf("%c",&ch);
    while (ch < 'A' || ch > 'Z')
    {
        printf("���벻����Ҫ�����������룺");
        scanf("%c",&ch);
    }
    k = ch - 'A';
    for (i = 0; i <= k; printf("\n"),i++)
        {for(j = 0; j < k - i; printf(" "),j++);
         for(j = 0; j < i+1; printf("%c",ch - k + j),j++);    //ch -(k-i) ÿһ�д�ch -k+i-1��ʼ��ӡ
         for(j = 0; j < i; printf("%c",ch - (k - i)-j-1),j++);//����-1 �ǽ������β���������ĸ��ʼ
        }                                                     //ÿһ���ַ�������Ϊj
    return 0;
}
*/

/*
//��6����ϰ��6
#include <stdio.h>
int main (void)
{
    int num1,num2;
    int i;
    printf("�������ӡ�������������С��100: ");
    scanf("%d",&num1);
    printf("�������ӡ������������޴���0: ");
    scanf("%d",&num2);
    for (i = num2; i <= num1;printf("%-5d %-10d %-15d\n",i,i*i,i*i*i), i++);

    return 0;
}
*/

/*
//��6����ϰ��7
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
    ///���������֤������ĸ�����дA-Z������ĸСд��a-z
    printf("������һ����������ĸ��д�����Сд��");
    scanf("%s",ch);
     /// ��֤�û������Ƿ���Ϲ涨���������������� ///////////////////////
    length = strlen(ch);//ȡ�ַ�������
    while (errorcount != 0 )
    {
        for (i = 0; i < length; i++)
        {
            if ( i == 0 && (ch[i]>='A' && ch[i] <='Z'))       //�ж�����ĸ�Ƿ����ΪA-Z
            {
                continue;
            }
            else if ( i != 0 && (ch[i]>='a' && ch[i] <='z'))
            {
                continue;
            }
            else //���벻����Ҫ��
            {
                printf("\n");
                printf("�������,�����Ϲ涨��\n");
                printf("\n����������һ����Ч�ĵ��ʣ�");
                printf("����ĸ��д�����Сд��");
                scanf("%s", ch);
                length = strlen(ch);       //���³�ʼ���ַ�����
                i = -1;                    //i = -1; ѭ��������i++ �����³�ʼ��i = 0,��ֹi >= numlen����ѭ����
            }
        }
        errorcount = 0;
    }
    /// ��֤�������///////////////////////////////////////////////////////
    ///��ӡ����////////////////////////////////////
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
//��6����ϰ��8
#include <stdio.h>
int main (void)
{
    float num1,num2;
    int status;
    printf("��������Ҫ�����2��������\n");
    printf("�����ʽΪ1.111�ո�1.111\n");
    printf("����������˳���");
    status = scanf("%f %f",&num1,&num2);
    while(status!=0)
    {
        //printf("������1�븡����2�Ĳ�Ϊ��%lf\n",num1-num2);
        //printf("������1�븡����2�Ļ�Ϊ��%lf\n",num1*num2);
        printf("����Ի��Ľ��Ϊ��%lf\n",(num1-num2)/(num1*num2));
        printf("#############################################\n");
        printf("��������Ҫ�����2��������\n");
        status = scanf("%f %f",&num1,&num2);
    }
    fflush(stdin);
    printf("������������˳�\n");
    getchar();
    return 0;
}
*/

/*
//��6����ϰ��9
#include <stdio.h>
float math1 (float n1, float n2); //math1 2�����Ĳ�������ǳ˻����̡�
int main (void)
{
    float num1,num2;
    int status;
    printf("��������Ҫ�����2��������\n");
    printf("�����ʽΪ1.111�ո�1.111\n");
    printf("��������q�˳���");
    status = scanf("%f %f",&num1,&num2);
    while(status!=0)
    {
        printf("����Ի��Ľ��Ϊ��%lf\n",math1(num1,num2));
        printf("#############################################\n");
        printf("��������Ҫ�����2��������\n");
        status = scanf("%f %f",&num1,&num2);
    }
    fflush(stdin);
    printf("������������˳�\n");
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
//��6����ϰ��10
#include <stdio.h>
int math2 (int n1,int n2); //math2 ��������n1��n2��Χ��(��n1��n2)����ƽ���ĺ�
int main (void)
{
    int num1,num2;
    int status;

    printf("������2����������������Ȼ���������ޣ�\n");
    printf("��ȷ��ʽ2�ո�99\n");
    printf("����С������ʱ�˳�\n");
    status = scanf("%d %d", &num1, &num2);
    while ((status != 0) && (num2 > num1))
    {
        printf("���ֵ�ƽ���� %d �� %d ��ƽ����Ϊ��%d\n",num1*num1,num2*num2,math2(num1,num2));
        printf("#############################################\n");
        printf("���ٴ��������޺����ޣ�\n");
        status = scanf("%d %d", &num1, &num2);
    }
    fflush(stdin);
    printf("������������˳�\n");
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
//��6����ϰ��11
/// //////////////////////////////////
///����NUMLEN���������ִ����������///
///��ҪУ�����룬Ȼ���������в���ӡ///
/// //////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUMLEN 8
void printnums (int *ptr,int numslen);//����int��������ָ�룬int�������鳤�ȣ������鵹���ӡ
int main (void)
{
    int nums[NUMLEN];
    int status;
    int * ptrnums;
    int i;
    ///����int����/////////////
    for (i = 0; i < NUMLEN; i++)
    {
        printf("������һ��������");
        status=scanf("%d",&nums[i]);
        while (status==0)//ͨ��scanf��������ֵУ�������Ƿ����ת�����е�Ҫ��
        {
            fflush(stdin);//������뻺�������������������ַ���������ѭ����
            printf("����������ٴ����룺");
            status=scanf("%d",&nums[i]);
        }

    }
    ptrnums = nums;//��ָ���ַָ��nums
    printnums(ptrnums,NUMLEN);//���ú�����ӡ����

    return 0;
}

void printnums (int *ptrs,int numslen)
{
    int i;
    int temp;

    printf("���������Ϊ��  ");
    for (i = 0; i < numslen; i++)
        printf("%d ",*(ptrs+i));
    printf("\n");
    for (i = 0; i < numslen / 2 + numslen % 2; i++)//��������Ϊ������ż���Ĳ�ͬ�����
    {
        temp = *(ptrs + i);
        *(ptrs + i) = *(ptrs + numslen - 1 - i);//numslen-1��Ӧ��i+1��Ԫ��8-1+1��8��Ԫ��
        *(ptrs + (numslen - 1 -i)) = temp;
    }
    printf("�����������Ϊ��");
    for (i = 0; i < numslen; i++)
        printf("%d ",*(ptrs+i));
    printf("\n");
}
*/

/*
//��6����ϰ��12
/// ////////////////////////////////////////
///����2������ѭ�������ܺ�,���û�����100,///
///1000,10000�����ܺͣ�����0�����˳� ///
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
    printf("��������Ҫѭ���Ĵ���С��0�˳�:");
    scanf("%d",&times);
    while (times > 0 )
    {
    for (i = 0; i < times; i++)
    {if ((int)i%2 == 0)
     {j=1;}
     else{j=-1;}

    result1 += 1.0/(1.0 + i);
    result2 +=(double)j/(1.0 + i);
    printf("��ǰ��%-5d��ѭ����ѭ��1Ϊ%.1lf/%-5.1lf\t���Ϊ��%-6lf  ##  ѭ��2Ϊ%.1lf/%-5.1lf\t���Ϊ��%-6lf\n",
           (int)i+1,1.0,1.0 + i,result1,(double)j,1.0+i,result2);
    }
    printf("���ٴ�����Ҫѭ���Ĵ���С��0�˳�:");
    scanf("%d",&times);
    }
    printf("���������");

    return 0;
}
*/

/*
//��6����ϰ��13
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
//��6�¿κ���ϰ14
#include <stdio.h>
#define LEN 8
int main (void)
{
    double nums1[LEN];
    double nums2[LEN];
    double sums = 0L;
    int i;
    printf("������double����1��");
    for (i = 0; i < LEN; i++)
    {
        scanf("%lf", &nums1[i]);
        sums += nums1[i];
        nums2[i] = sums;
    }

        printf("����1��ֵΪ��\n");
    for (i = 0; i < LEN; i++)
        printf("[%.2lf]\t",nums1[i]);
    printf("����2��ֵΪ��\n");
    for (i = 0; i < LEN; i++)
        printf("[%.2lf]\t",nums2[i]);

    printf("�������\n");

    return 0;
}
*/

/*
//��6����ϰ��15
#include <stdio.h>
#include <string.h>
int main (void)
{
    char chs[255];
    int i=0;
    int index;
    printf("������һ���ַ���");
    for (i=0;i<255;i++)
        {
            scanf("%c",&chs[i]);
            if(chs[i]=='\n')
                {index=i;
                break;}
        }
    printf("�����ַ�Ϊ\n[");
    for (i=0;i<index;i++)
      printf("%c",chs[i]);
    printf("]\n�������Ϊ\n[");
    for (i=index-1;i>=0;i--)
        printf("%c",chs[i]);
    printf("]\n");

    return 0;
}
*/

/*
//��6����ϰ��16
#include <stdio.h>
int main (void)
{
    const double DALX = 0.1;    //��Ϣ10%
    const double DELX = 0.05;   //��Ϣ5%
    double Daphne = 100.0;
    double Deirdre = 100.0;
    int years = 1;

    while(Deirdre <= Daphne)
        {
            Daphne += 100.0 * DALX;
            Deirdre *= 1 + DELX;
            //printf("Deirdre��Ͷ�ʶ�Ϊ��%.2lf Daphne��Ͷ�ʶ�Ϊ��%.2lf\n", Deirdre, Daphne);
            years++;
        }
    printf("����%d��ʱ Deirdre��Ͷ�ʶ��Daphne\n",years);
    printf("Deirdre��Ͷ�ʶ�Ϊ��%.2lf Daphne��Ͷ�ʶ�Ϊ��%.2lf\n", Deirdre, Daphne);

    return 0;
}
*/

/*
//��6����ϰ��17
#include <stdio.h>
int main (void)
{
    const double LX = 0.08;
    double Lucky = 1000000.0;
    int years = 1;
    while (Lucky > 0)
    {
        Lucky = Lucky + Lucky * LX - 100000.0;
        //printf("Lucky��ǰ���Ϊ��%.2lf\n", Lucky);
        years ++;
    }
    printf("����%d��ʱ Lucky��Ǯȡ��\n", years);
    printf("Lucky��ǰ���Ϊ��%.2lf\n", Lucky);
    return 0;
}
*/

/*
//��6����ϰ��18
#include <stdio.h>
int main (void)
{
    const int DBNUM = 150;
    int weeks = 1;
    int friends = 5;
    while (friends <= DBNUM)
    {
        friends = (friends - weeks)*2;
        printf("��ǰ��[%d]�� ����Ȧ����Ϊ��%d\n", weeks, friends);
        weeks++;
    }

    return 0;
}
*/