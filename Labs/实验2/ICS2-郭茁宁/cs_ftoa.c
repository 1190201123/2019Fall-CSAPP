#include<stdio.h>
#include<string.h>
#define N 80

int main(void)
{
    int d, i, j, k, m;
    long c, n;
    double a, b;
    double num[N];
    char str[N];
    printf("���븡������ʮ���ƣ���");
    scanf("%lf",&a);
    n = (long int)a;
    i = 1;
    d = 0;
    while(n!=0)
    {
        n = n/10;
        if(n!=0)
            i++;
    }
    for(j=0;j<i;j++)
    {
        c = 1;
        for(m=1;m<i-j;m++)
        {
            c = c*10;
        }
        num[j] = c;
        if(j==0)
            str[j] = (char)((int)a/c+48);
        else
        {
            b = a;
            for(k=0;k<j;k++)
            {
                b = b-(double)(((int)str[k]-48)*num[k]);
            }
            str[j] = (char)(b/c+48);
        }
    }                                                                         //��������ת��

    b = a;                                                                    //С������ת��
    for(j=0;j<i;j++)
    {
        b = b-(double)((int)(str[j]-48)*num[j]);
    }
    if(b*10>0)
    {
        str[i] = '.';
        while(i<=j+6)
        {
            b = b*10;
            d = (int)b;
            b = b-d;
            i++;
            str[i] = (char)(d+48);
        }
    }
    str[i] = '\0';
    printf("���븡������%f �任Ϊ�ַ�����%s\n",a, str);
    return 0;
}
