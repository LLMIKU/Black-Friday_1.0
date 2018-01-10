#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int year, month, day, of;
	int nian, yue, ri;
	int n = 0;
	int h, g, t;
	printf("请输入你想要查找的某个日期之前的黑色星期五，输入格式为年 月 日:\n");
	printf("(注意:查找到的日期均是公元后的日期，公元前并不包括在内)\n");
	printf("祝使用愉快！^_^\n");
	printf("现在请按格式输入:\n");
	scanf("%d%d%d", &nian, &yue, &ri);
	for (year = 1; year <= nian; year++)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) 
			of = 1;//闰年
		else 
			of = 0;
		if (year == nian) 
			h = 12 - yue;//使得后面的12-h=yue
		else 
			h = 0;
		for (month = 1; month <= 12 - h; month++)
		{
			switch (month)
			{
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:g = 3; break;//31天=28+3
			case 2:g = of; break;//2月=28+(1 or 0)
			case 4:case 6:case 9:case 11:g = 2; break;//30天=28+2
			}
			if (year == nian&&month == yue) 
				t = 28 + g - ri;//使得后面的 28 + g - t = ri
			else 
				t = 0;
			for (day = 1; day <= 28 + g - t; day++)
			{
				n++;
				if (day == 13 && n % 7 == 5 && (nian - year <= 100))
					printf("第%d天,%d年,%d月,%d日：周%d\n", n, year, month, day, n % 7);
			}
		}
	}
	printf("以上即为查找到的所有的黑色星期五\n");
	system("pause");
}
