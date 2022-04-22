//要求，扫描输入的年龄，如果大于18，则返回"要为自己的行为负责"
#include<stdio.h>
void main() {
	int age = 0;//初始化变量
	printf("请输入你的年龄:\n");//提示信息
	scanf_s("%d", &age);//扫描输入的数字，把它赋值给age;
	//底层为，扫描的数指向age，数字输入过后，直接更改掉了age内的值，也就是让数字替换掉age里的0
	if (age >= 18) {
		printf("要为自己的行为负责");
	}
	else {
		printf("好好学习");
	}
	
}