////统计三个班的成绩情况，每个班有五个同学，求出各个班级的平均分和所有班级的平均分[学生的成绩从键盘输入],判断及格人数
////分析，先求每个班班级内部的平均分，再求三个班加起来求得所有班的平均分
////定义变量表示班级的数量classnum
////定义变量表示学生的数量stunum
//// 定义变量score,接收学生成绩
////定义变量totalscore多个班级的总分
//// 定义变量acscore来获取所有班级的总分数
//// 定义一个变量count,保存及格人数
//// 当接收到一个学生成绩后，就看看是否及格，如果及格，则累积到count中
////使用嵌套循环
//#include<stdio.h>
//void main() {
//	int stunum = 5;//学生数
//	int classnum = 3;//班级数目
//	double score = 0.0;//学生分数
//	double totalscore = 0.0;//总分数
//	double acscore = 0.0;//全部班级的总分数
//	int count = 0;//统计及格人数
//	int i, j;
//	for (i = 1; i <= classnum; i++) {//控制班级循环的次数
//		//每次给一个班级输出成绩时，需要清零
//		totalscore = 0.0;
//		for (j = 1; j <= stunum; j++) {//控制学生循环的次数
//			printf("\n请输入第%d班级的第%d个学生的成绩:\n",i, j);
//			scanf_s("%lf", &score);//拿到第i,个班第j位学生的成绩
//			if (score >= 60) {
//				count++;
//			}
//				totalscore += score;//累计成绩
//		}//内层的for循环结束后，就得到了i班级的总成绩
//		printf("\n第%d个班的平均分为%.2f", i, totalscore / stunum);
//		acscore += totalscore/stunum;//累计所有班级成绩
//	}printf("所有班级的平均分为:%.2f", acscore/3);
//	printf("所有班级的及格人数为%d", count);
//	getchar();
//}