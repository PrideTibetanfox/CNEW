//#include<stdio.h>
//void main() {
//	int j, i;
//	for (j = 0; j <= 4; j++) {
//		for (i = 0; i <= 10; i++) {
//			if (i == 2) { break; }
//			printf("i=%d\n", i);
//		}
//	}
//
//	/*
//i=0
//i=1
//i=0
//i=1
//i=0
//i=1
//i=0
//i=1
//i=0
//i=1
//	*/

////100以内的数求和，求出当和第一次大于20的当前的数
//#include<stdio.h>
//void main() {
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i <= 100; i++) {
//		sum += i;
//		if (sum >= 20) {
//			break;
//		}
//	}printf("sum=%d,i=%d",sum, i);
//}

//实现登陆验证，有三次机会，如果用户名为“张无忌”，密码为“888”提示登录成功，否则提示还有几次机会
#include<stdio.h>
#include<string.h>//引入string.h以便调用strcmp(" "," ")==0来判断字符串是否相同
void main() {
	int chance = 3;
	char name[10] = " ";
	char code[10] = " ";
	int i;
	for (i = 1; i <= chance; i++) {
		printf("请输入用户名:");
		scanf_s("%s", name);//字符数组不需要&符
		scanf_s("%d", code);
		if (strcmp("张无忌", name) == 0 && strcmp("888", code)==0) {
			printf("登陆成功");
			break;
		}
		else {
			//机会次数-1；
			chance -= 1;
			printf("你还有%d次登陆机会",chance);
		}
		getchar();//接收空格
	}
}