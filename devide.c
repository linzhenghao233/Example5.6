/* devide.c -- 演示除法 */
#include <stdio.h>
int main(void) {
	printf("integer division: 5/4 is %d\n", 5 / 4);
	printf("integer division: 6/3 is %d\n", 6 / 3);
	printf("integer division: 7/4 is %d\n", 7 / 4);
	printf("floating division: 7./4. is %1.2f\n", 7. / 4.);	//数字加点代表一个小数，通常是double类型。
	printf("mixed division: 7./4 is %1.2f\n", 7. / 4);

	return 0;
}

//运行结果：
//integer division: 5/4 is 1
//integer division: 6/3 is 2
//integer division: 7/4 is 1
//floating division: 7./4. is 1.75
//mixed division: 7./4 is 1.75