#include<stdio.h>
#include<stdlib.h>

int main()
{
int a = 3;
float b = 5.5;

printf("%d\n",a+b);
printf("%d\n",a-b);
printf("%d\n",a*b);
printf("%d\n",a/b);
/*�H%d��X�[����ƭ���ܬ�0�A�]��%d�u��X�C��32�줸���ƾڡA
�ӥ�float�B��᪺�C32�쬰0�A�ҥH��ܿ�X��0�C*/
/*�H%d��X�����k���G��390451572�A�]��%d�u��X�C��32�줸���ƾڡA
�G390451572���B���̧C32�쪺�ƾ��ର10�i��᪺���G�C*/
//�ѦҺ��}:https://read01.com/zh-tw/nx8y4o.html#.Wc3wWWiCzIU

printf("%f\n",a+b);
printf("%f\n",a-b);
printf("%f\n",a*b);
printf("%f\n",a/b);
//�ϥ�%f��X�h�L���D

system("PAUSE");
return 0;
}