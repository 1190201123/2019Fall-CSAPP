#include<stdio.h>
#include<float.h>

int main(void)
{
    float a, b, c, d, e, f, g;
    a = +0;
    b = -0;
    c = 1.4e-45;
    d = FLT_MAX;
    e = FLT_MIN;
    f = 1.0/0.0;
    g = 1.0/0.0*0.0;
    printf("+0(ʮ����):%f;(ʮ������):%x\n",a,a);
    printf("-0(ʮ����):%f;(ʮ������):%x\n",b,b);
    printf("��С��������(ʮ����):%f;(ʮ������):%x\n",c,c);
    printf("��󸡵�����(ʮ����):%f;(ʮ������):%x\n",d,d);
    printf("��С���Ĺ�񻯸�����(ʮ����):%f;(ʮ������):%x\n",e,e);
    printf("������(ʮ����):%f;(ʮ������):%x\n",f,f);
    printf("NaN(ʮ����):%f;(ʮ������):%x\n",g,g);
}
