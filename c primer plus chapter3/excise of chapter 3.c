#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
/* //3.1 ����ʾ��
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
    //3.2����ʾ��
int main(void)
{
    int ten = 10;
    int two = 2;
    printf("Doing it right: ");
    printf("%d minus %d is %d \n", ten, two, ten - two);
    printf("Doing it wrong: ");
    printf("%d minus %d is %d \n", ten); //��©2������
    return 0;
}
*/

/*
    //3.3����ʾ��
    int main (void)
    {
        int x = 100;
        printf("dec = %d; octal = %o; hex = %x \n", x, x, x);
        printf("dec = %d; octal = %#o; hex = %#x \n", x, x, x);
        printf("dec = %d; octal = %#o; hex = %#X \n", x, x, x); //x������СдҲ�����ô�д.����oֻ����Сд

        return 0;
    }
*/

/*

// ʾ������ �������������Ϊ ��ʾ
int main (void)
{
    int i = 2147483647;
    unsigned int j = 4294967295;
    int k;
    unsigned int a = 1;
    signed int a1 = 1;
    /// ������������ ȷ��ȡֵ��Χ
    for (k = 0; k < sizeof(a)*8; k++)
    {
        a = a*2;
    }
    printf("�޷����������� unsigned ռ%d���ֽ�\n�޷��ŷ�ΧΪ%u �� %u\n",sizeof(a), a, a - 1);
    for (k = 0; k < sizeof(a1)*8 - 1; k++)
    {
        a1 = a1 * 2;
    }
    printf("�з����������� signed   ռ%d���ֽ�\n�з��ŷ�ΧΪ %d �� %d\n",sizeof(a1), a1, a1 - 1);
    ///
    printf("%d %d %d\n", i, i + 1, i + 2);
    printf("%u %u %u\n", j, j + 1, j + 2);

    return 0;
}
*/

/*
    //3.4��������
int main (void)
{
    unsigned int un = 2147483647 + 2147483648; //0 - 4294967295;
    short end = 32767; // -32768 - 32767
    long big = 65537; // -2147483648 - 2147483647
    long long verybig = 21474836470;

    printf("un = %u and not %d\n", un, un); // �޷���ռλ��%u ��ʹ��%d ȡֵ��ΧΪ 4*8-1 31λ 2^31-1 2147483647 �����ͻ��ظ�ѭ�� -2147483648 �� 2147483647
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);//%hd Ϊshort����ռλ�� ֻȥ����������ĩβ2���ֽ�15����+1λ���� ��ʹ�ø�ռλ��ʱ ����2^15-1 32767�ͻ��ظ�ѭ�� -32768 �� 32767
    printf("verybig = %lld and not %ld\n", verybig, verybig); //%ld Ϊlong���͵�ռλ�� 4���ֽ� 31λ+1λ���� ��Χ  -2147483648 �� 2147483647



    return 0;
}

*/

/*
//char ��int ���ʹ洢���ݵ�ռ1���ֽ�8λ-128 �� 127. 0x00 �� 0x7f;
//ASCII ռ0-127����ͨ����ͬռλ����ʾ%c ascii�ַ� %d ��ֵ
int main (void)
{
    int i, j;
    for (i = 0x0; i < 0x20; i++)
    {
        for (j = 0x20 ; j < 0x61; j+=0x20) //0x00 - 0x1f ����Щ��ʵ����ʾ���ַ�.�ʴ�0X20��ʼ��ӡ
        {
            printf("�ַ�:[%c]\tASCII��:%d\t",i + j ,i + j);
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
    //3.5����ʾ��
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
//3.6����ʾ��
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
//3.9 ����ʾ��
int main (void)
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;
    printf("%d\n", n, m); //����̫��
    printf("%d %d %d\n", n); // ����̫�� ��Ϊprintf("%d %d %f\n", n, m, f);
    printf("%d %d\n",f ,g); //�������Ͳ��� printf("%f %f\n",f ,g);

}
*/

/*
//3.10 ����ʾ��
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
//�����ַ���int��ʾ��8���ƺ�16����ת��Ϊascii˵��
int main (void)
{
    char ch, ch1, ch2, ch3;
    ch = 'A';
    ch1 = 65;
    ch2 = 0101;
    ch3 = 0x41;
    printf("%c %c %c %c\n",ch , ch1, ch2, ch3);
    printf("%c %d %#o %#x\n", 'A');
    printf("\x41 \07777 \n");// ��ʾһ��A ?77 \07777��ʶ��Ϊ \077 ? ����77����ת���ӡ77

    return 0;
}
*/
/*
//�κ���ϰ3.9
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
//�κ���ϰ3.10
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
//3.11�����ϰ1 //�۲���������,���������������
int main (void)
{
    int i;
    short num1 = 1;                 //ռλ��%hd
    unsigned short num2 = 1;        //ռλ��%hu
    int num3 = 1;                   //ռλ��%d
    unsigned int num4 = 1;          //ռλ��%u
    long num5 = 1;                  //ռλ��%ld
    unsigned long num6 = 1;         //ռλ��%lu
    long long num7 = 1;             //ռλ��%lld
    unsigned long long num8 = 1;    //ռλ��%llu
    float num9i, num9x;             //ռλ��%f ָ����ʾ��%e
    double num10i, num10x;          //ռλ��%lf ָ����ʾ��%e
    //short����ȡֵ��Χ���缰����
    for (i = 0; i < sizeof(num1)*8 - 1; i++)//�з����ֽ���*8λ��1λ
    {
        num1 *= 2;
    }
    printf("short����num1ռ%zd�ֽ�\nȡֵ��ΧΪ:\t\t%hd �� %hd\n",sizeof(num1) ,num1 , num1 - 1);//sizeof ����ֵռ�÷�%zd
    printf("��Сֵ��1����Ϊ:\t%hd\n���ֵ��1����Ϊ:\t%hd\n",num1 - 1, num1);
    printf("short������������Ϊ��ȡֵ��Χ��ѭ��\n");
    printf("\n");
    //unsigned short����ȡֵ��Χ���缰����
    for (i = 0; i < sizeof(num2)*8; i++)//�޷����ֽ���*8
    {
        num2 *= 2;
    }
    printf("[unsigned short]����num2ռ%zd�ֽ�\nȡֵ��ΧΪ:\t\t%hu �� %hu\n",sizeof(num2) ,num2, num2 - 1);
    printf("��Сֵ��1����Ϊ:\t%hu\n���ֵ��1����Ϊ:\t%hu\n",num2 - 1, num2);
    printf("[unsigned short]������������Ϊ��ȡֵ��Χ��ѭ��\n");
    printf("\n");
    //int ����ȡֵ��Χ���缰����
    for (i = 0; i < sizeof(num3)*8 - 1; i++)//�з����ֽ���*8λ��1λ
    {
        num3 *= 2;
    }
    printf("[int]����num3ռ%zd�ֽ�\nȡֵ��ΧΪ:\t\t%d �� %d\n",sizeof(num3) ,num3, num3 - 1);
    printf("��Сֵ��1����Ϊ:\t%d\n���ֵ��1����Ϊ:\t%d\n",num3 - 1, num3);
    printf("[int]������������Ϊ��ȡֵ��Χ��ѭ��\n");
    printf("\n");
    //unsigned int ����ȡֵ��Χ���缰����
    for (i = 0; i < sizeof(num4)*8; i++)//�޷����ֽ���*8λ
    {
        num4 *= 2;
    }
    printf("[unsigned int]����num4ռ%zd�ֽ�\nȡֵ��ΧΪ:\t\t%u �� %u\n",sizeof(num4) ,num4, num4 - 1);
    printf("��Сֵ��1����Ϊ:\t%u\n���ֵ��1����Ϊ:\t%u\n",num4 - 1, num4);
    printf("[unsigned int]������������Ϊ��ȡֵ��Χ��ѭ��\n");
    printf("\n");
    //long ����ȡֵ��Χ���缰����
    for (i = 0; i < sizeof(num5)*8 - 1; i++)//�з����ֽ���*8λ��1λ
    {
        num5 *= 2;
    }
    printf("[long]����num5ռ%zd�ֽ�\nȡֵ��ΧΪ:\t\t%ld �� %ld\n",sizeof(num5) ,num5, num5 - 1);
    printf("��Сֵ��1����Ϊ:\t%ld\n���ֵ��1����Ϊ:\t%ld\n",num5 - 1, num5);
    printf("[long]������������Ϊ��ȡֵ��Χ��ѭ��\n");
    printf("\n");
    //unsigned long ����ȡֵ��Χ���缰����
    for (i = 0; i < sizeof(num6)*8; i++)//�޷����ֽ���*8λ
    {
        num6 *= 2;
    }
    printf("[unsigned long]����num6ռ%zd�ֽ�\nȡֵ��ΧΪ:\t\t%lu �� %lu\n",sizeof(num6) ,num6, num6 - 1);
    printf("��Сֵ��1����Ϊ:\t%lu\n���ֵ��1����Ϊ:\t%lu\n",num6 - 1, num6);
    printf("[unsigned long]������������Ϊ��ȡֵ��Χ��ѭ��\n");
    printf("\n");
    //long long ����ȡֵ��Χ���缰����
    for (i = 0; i < sizeof(num7)*8 - 1; i++)//�з����ֽ���*8λ��1λ
    {
        num7 *= 2;
    }
    printf("[long long ]����num7ռ%zd�ֽ�\nȡֵ��ΧΪ:\t\t%lld �� %lld\n",sizeof(num7) ,num7, num7 - 1);
    printf("��Сֵ��1����Ϊ:\t%lld\n���ֵ��1����Ϊ:\t%lld\n",num7 - 1, num7);
    printf("[long long ]������������Ϊ��ȡֵ��Χ��ѭ��\n");
    printf("\n");
    //unsigned long long  ����ȡֵ��Χ���缰����
    for (i = 0; i < sizeof(num8)*8; i++)//�޷����ֽ���*8λ
    {
        num8 *= 2;
    }
    printf("[unsigned long long ]����num8ռ%zd�ֽ�\nȡֵ��ΧΪ:\t\t%llu �� %llu\n",sizeof(num8) ,num8, num8 - 1);
    printf("��Сֵ��1����Ϊ:\t%llu\n���ֵ��1����Ϊ:\t%llu\n",num8 - 1, num8);
    printf("[unsigned long long ]������������Ϊ��ȡֵ��Χ��ѭ��\n");
    printf("\n");
    //float ����ȡֵ��Χ���缰���� ���ڼ����Ϊ������ʱֻȡֵ ��1.18��10-38 �� ��3.40��1038
    num9i = -1.18e-38f;
    num9x = 3.40e38f;
    printf("[float]����num9ռ%zd�ֽ�\nȡֵ��ΧΪ����%.2e �� ��%.2e\n",sizeof(num9i), num9i, num9x);
    printf("��Сֵ����Ϊ:\t%e\n���ֵ����Ϊ:\t%e\n",num9i / 1e286, num9x * 1e272);
    printf("\n");
    //double ����ȡֵ��Χ���缰���� ���ڼ����Ϊ������ʱֻȡֵ ��2.23��10-308 �� ��1.79��10308
    num10i = -2.23e-308;
    num10x = 1.79e308;
    printf("[double]����num10ռ%zd�ֽ�\nȡֵ��ΧΪ����%.2e �� ��%.2e\n",sizeof(num10i), num10i, num10x);
    printf("��Сֵ����Ϊ:\t%e\n���ֵ����Ϊ:\t%e\n",num10i / 1e16, num10x * 10);

    return 0;
}
*/

/*
//3.11�����ϰ2
int main (void)
{
    int ascii; //or char����
    printf("������һ��ascii��ֵ��������ַ���������:__\b\b");
    scanf("%d", &ascii);//���������ʹ洢��%c�Ļ�ֻ�ܴ洢��һ�����ֵ��ַ� ex�� 65ֻ���ַ�6��Ӧ��ASCII��ֵ
    printf("�������ascii��ֵΪ%d����Ӧ��ascii�ַ�Ϊ��%c", ascii, ascii);

    return 0;
}
*/

/*
//3.11�����ϰ3
int main (void)
{
    printf("\a");
    printf("Startled by the sudden sound, Sally shouted,\n");
    printf("\"By the Great Pumpkin, what was that!\"\n");
    return 0;
}
*/

/*
//3.11�����ϰ4
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
//3.11�����ϰ5
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
//3.11�����ϰ6
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
//3.11�����ϰ7
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
//3.11�����ϰ8
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