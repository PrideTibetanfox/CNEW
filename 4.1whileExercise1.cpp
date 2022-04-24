////while练习
////打印1-100之间所有能被3整除的数
////打印40-200之间所有的偶数
////不断输入姓名，直到输入"exit"为止
//
//
////==第一题==
////#include<stdio.h>
////void main() {
////	int num = 1;
////	while(num<100){
////		if (num % 3 == 0) {
////			printf("%d\n", num);
////		}num++;
////	}
////}
//
//
////==第二题==
////#include<stdio.h>
////void main() {
////	int num = 40;
////	while (num <= 400) {
////		if (num % 2 == 0) {
////			printf("%d\n", num);
////		}num++;//这一步最容易忘掉，一定要让循环变量迭代
////	}
////}
//
////==第三题==
//#include<string.h>
//#include<stdio.h>
//
//void main() {
//	char name[10] = "";
//	
//	while (strcmp(name, "exit")!= 0) {
//		printf("\n请输入名字");
//		scanf_s("%s",name);//--->!!!这里不加地址符“&”因为数组的名称就代表他的地址
//		printf("\n你输入的名字是=%s", name);
//	}
//	printf("退出");
//	getchar();//过滤掉回车
//	getchar();
//	
//}