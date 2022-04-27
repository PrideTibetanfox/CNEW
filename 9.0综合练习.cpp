////#include<stdio.h>
////void main() {
////	printf("请输入一个整数:");
////	int num = 0;
////	scanf_s("%d", &num);
////	int num1 = num / 100;
////	int num2 = num % 100 / 10;
////	int num3 = num % 10;
////	if (num == num1 * num1 * num1 + num2 * num2 * num2 + num3 * num3 * num3) {
////		printf("%d就是水仙花数", num);
////	}
////	else {
////		printf("%d不是水仙花数", num);
////	}
////	getchar();
////}
//
////编写程序，根据输入的月份和年份，输出该月的天数
////#include<stdio.h>
////void main() {
////	printf("请输入年份:\n");
////	int year = 0;
////	scanf_s("%d", &year);
////	printf("请输入月份:\n");
////	int month = 0;
////	scanf_s("%d", &month);
////	//printf("请输入年份:");
////	//int month = 0;
////	//scanf_s("%d", &month);
////	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
////	/*	printf("请输入月份%d");
////		int  month =0;
////		scanf_s("%d", &month);*/
////		if (month == 1 || month == 3 || month == 7 || month == 8 ||month==10|| month == 12) {
////			printf("%d年%d月有31天",year,month);
////		}
////		else if (month == 2) {
////			printf("%d年2月有29天", year);
////		}
////		else {
////			printf("%d年%d月有30天", year, month);
////		}
////	}
////	else {
////		/*int month = 0;
////		scanf_s("%d", month);*/
////		if (month == 1 || month == 3 || month == 7 || month == 8 ||month==10|| month == 12) {
////			printf("%d年%d月有31天", year, month);
////		}
////		else if (month == 2) {
////			printf("%d年2月有28天", year);
////		}
////		else {
////			printf("%d年%d月有30天", year, month);
////		}
////	}
////}
//
////==简单方法==
////利用switch的穿透
//#include<stdio.h>
//void main() {
//	int year = 0;
//	int month = 0;
//	printf("请输入年份:");
//	scanf_s("%d", &year);
//	printf("请输入月份:");
//	scanf_s("%d", &month);
//	switch (month) {
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		printf("%d年的%d月有31天", year, month);
//		break;
//	case 2:
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
//			printf("%d年的2月有29天",year);
//		}
//		else {
//			printf("%d年的2月有28天",year);
//		}break;
//	default:
//		printf("%d年的%d月有30天",year);
//		break;//可有可无
//	}
//}

//输出小写的a-z以及大写的Z-A
//#include<stdio.h>
//void main() {
//	char c1,c2;
//	for (c1 = 'a'; c1 <= 'z'; c1++) {
//		printf("%c\n", c1);
//	}
//	printf("==========\n");
//	for (c2 = 'Z'; c2 >= 'A'; c2--) {
//		printf("%c\n", c2);
//	}
//}
// 
// 
// ==求1+1/2-1/3+1/4+..+1/100
//#include<stdio.h>
//void main() {
//	int i;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 2 == 0) {
//			sum += 1.0/i;
//		}
//		else {
//			sum -= 1.0/i;
//		}
//	}
//	printf("sum=%.2f", sum);
//}

//输出100-9999年的所有闰年
#include<stdio.h>
void main() {
	printf("100-9999年的所有闰年如下所示:\n");
	int i;
	for (i = 100; i <= 999; i++) {
		if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0) {
		printf("%d\n", i);
		}
	}
}