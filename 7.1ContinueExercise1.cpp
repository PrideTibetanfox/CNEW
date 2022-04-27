////#include<stdio.h>
////void main() {
////	//从键盘读入个数不确定的整数，并判断读入的正数和负数的个数。
////	//输入为0时结束程序（使用for循环，break，continue完成）【positive正数，negative负数】
////	//定义变量postive保存正数的个数
////	//定义变量negative保存负数的个数
////	//使用break+while+contiue
////	int postive = 0;
////	int negative = 0;
////	int num = 0;//接收输入的数
////	for (;;) {//死循环，永远不会退出，除非跳出循环
////		printf("请输入数:");
////		scanf_s("%d", &num);
////			if (num == 0) {//如果num=0,结束循环
////				break;
////			}if (num < 0) {//如果num<0,
////				negative++;//负数的个数+1
////				continue;//跳出当前循环
////			}
////			postive++;//正数的个数+1
//		/*	else if (num > 0) {
//				postive++;
//	//		}*/
//	//	}
//	//printf("postive=%d,negative=%d", postive, negative);
//	//}
//
//
////==demo3==
////判断一个有100000的人过路口，有50000以上的钱的时候每过一个路口交5%的钱，否则每过一个路口交1000
//#include<stdio.h>
//void main() {
//	int count = 0;
//	float fee = 100000.0;
//	while (1) {//死循环，一般不用
//		//判断是否该退出
//		if (fee < 1000) {
//			break;//小于1000块钱直接退出循环
//		}
//		if (fee > 50000.0) {
//			fee = fee * 0.95;
//			count += 1;
//		}
//		else if(fee<=50000) {
//			fee -= 1000;
//			count += 1;
//		}
//		
//	}printf("100000块钱可以经过%d个路口\n还剩余%.2f块钱", count,fee);
//
//}