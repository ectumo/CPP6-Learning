#include <stdio.h>
#include <stdlib.h>
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
    num9i = -1.18e-38;
    num9x = 3.40e38;
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


