#include<stdio.h>

#define add(a,b) ((a)+(b))
int main()
{
	float a,b;
	scanf("%f%f",&a,&b);
	printf("add(a,b)=%f",add(a,b));
	#undef add(a,b)
//	printf("add(a,b)=%f",3*add(a,b));//出现报错，add(a,b) 
 } 
// #define可以表示任何类型 
// #define的作用域为自 #define那一行起到源程序结束。如果要终止其作用域可以使用 #undef命令
//宏比函数在程序的规模和速度方面更胜一筹
