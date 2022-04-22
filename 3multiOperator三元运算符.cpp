//#include<stdio.h>
//void main() {
//	int a = 10;
//	int b = 99;
//	int res = a > b ? a++ : b--;//判断a是否大于b，如果大于，则执行a++，不大于就执行b--
//	printf("\na=%d,\nb=%d,\nres=%d", a, b, res);
//
//	//案例，求三个数的最大值===================
//	int n1 = 9;
//	int n2 = 3;
//	int n3 = 2;
//	int max1 = n1 > n2 ? n1 : n2;//判断n1是否大于n2,如果n1>n2,就把n1赋给max1,如果n1不大于n2，就把n2的值赋给max1
//	int max2 = res > n3 ? max1 : n3;//判断上一步取得的max1是否大于c,如果大于c，就把max1的值赋给max2,如果不大于c，就把c的值赋给max2
//	printf("\nmax=%d", max2);//max=9
//}//a不大于b，执行b--,先赋值再减，先把b=99赋给了res,之后自减1，99-1=98
///*
//a=10,
//b=98,
//res=99
//*/