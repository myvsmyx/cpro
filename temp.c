#include <stdio.h>

#define LOWER 0 // 表的下限
#define UPPER 300 //表的上限
#define STEP  20 //步长

main()
{
	float fahr, celsius;


	//fahr = lower;
	printf("华氏 --- 摄氏 对照表\n");
	/*
  	while( fahr <= upper ) {
		celsius = 5.0 * (fahr - 32) / 9;
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	*/
	/*
	for( fahr = upper; fahr >= 0; fahr = fahr - 20 )
	{
		printf("%3.0f\t%6.1f\n", fahr, (5.0 / 9)*(fahr - 32) );
	}
	*/


	for( fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP )
	{
		printf("%3.0f\t%6.1f\n", fahr, (5.0 / 9)*(fahr - 32) );
	}

}
