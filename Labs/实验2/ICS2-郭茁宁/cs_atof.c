#include<stdio.h>
#include<string.h>
#define N 80

int main(void)
{
    int i, j, n, m, k;
    double a, b;
    char str[N];
    printf("�����ַ�����ʮ���ƣ���");
    scanf("%s",str,N);
    a = 0;
    for(i=0;str[i]!='.';i++)            //�ж�С����ǰλ��
    {

    }
    for(j=0;j<i&&str[j]!='.';j++)       //���ַ�����������ת���ɸ�����
    {
        b = (double)str[j]-48;
        for(n=1;n<i-j;n++)
        {
            b = b*10;
        }
        a = a+b;
    }
    i = strlen(str);                     //���ַ���С�������ַ�ת��Ϊ������
    for(m=j+1;m<i;m++)
    {
        b = (double)str[m]-48;
        for(k=0;k<m-j;k++)
        {
            b = b*0.1;
        }
        a = a+b;
    }
    printf("�ַ�����%s �任Ϊ��������%f\n",str, a);
    return 0;
}
