#include<stdio.h>

#define add(a,b) ((a)+(b))
int main()
{
	float a,b;
	scanf("%f%f",&a,&b);
	printf("add(a,b)=%f",add(a,b));
	#undef add(a,b)
//	printf("add(a,b)=%f",3*add(a,b));//���ֱ���add(a,b) 
 } 
// #define���Ա�ʾ�κ����� 
// #define��������Ϊ�� #define��һ����Դ������������Ҫ��ֹ�����������ʹ�� #undef����
//��Ⱥ����ڳ���Ĺ�ģ���ٶȷ����ʤһ��
