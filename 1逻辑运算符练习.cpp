#include<stdio.h>
void main() {
	int x = 1;
	int y = 0;
	short z = 42;
	if ((z++ == 42) && (y = 1)) {//逻辑与，z先赋值再计算，此条件为真，z这时=43，y此时被赋值=1
		z++;//z自增，此时z=43+1=44
	}
	if ((x = 0) || (++z == 45)) {//x=0,为假，逻辑或规定，第一条为真即全真，不用判断第二条件，
		//但第一条件为假时需要判断第二条件，所以执行z先运算再赋值z=z+1=44+1=45,45==45,为真，执行语句
		z++;//z自增，z=45+1=46
	}
	printf("z=%d", z);//z=46
}