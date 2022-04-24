////打印1-100
////计算1-100的和
////计算1-200之间能被5整除但不能被三整除的数
////如果老公同意老婆购物，则老婆将一直购物，直到老公说不同意为止
//
////==1==
////#include<stdio.h>
////void main() {
////	int i = 1;
////	do {
////		printf("i=%d\n", i);
////		i++;
////	} while (i <= 100);
////}
//
////==2==
////#include<stdio.h>
////void main() {
////	int i = 1;
////	int sum = 0;
////	do {
////		sum += i;
////		i++;
////
////	} while (i <= 100);
////	printf("sum = % d", sum);
////}
//
////==3==
////#include<stdio.h>
////void main() {
////	int i = 1;
////	int max = 200;
////	int count = 0;
////	do {
////		if (i % 5 == 0 && i % 3 != 0) {
////			printf("i=%d\n", i);
////			count++;
////		}i++;
////	} while (i<=max);
////	printf("1-200之间能被5整除但不能被三整除的数有%d个", count);
////}
//
////==4==
//#include<stdio.h>
//void main() {
//	char answer = ' ';
//	do {
//		printf("老婆问：我可以购物么？y/n");
//		scanf_s("%c", &answer);//获取用户输入
//		getchar();//过滤回车符
//	} while (answer == 'y');
//	printf("终于停止购物");
//}