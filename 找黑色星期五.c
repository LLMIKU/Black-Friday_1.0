#include<stdio.h>

void main()
{
	int y,m,d,of;
	int nian,yue,ri;
	int n=0;
	int h,g,t;
	printf("����������Ҫ���ҵ�ĳ������֮ǰ�ĺ�ɫ�����壬�����ʽΪ�� �� ��:\n"); 
	printf("(ע��:���ҵ������ھ��ǹ�Ԫ������ڣ���Ԫǰ������������)\n");
    printf("ףʹ����죡^_^\n"); 
    printf("�����밴��ʽ����:\n");
	scanf("%d%d%d",&nian,&yue,&ri);
	for(y=1;y<=nian;y++)
	{	if(y%4==0&&y%100!=0||y%400==0) of=1;
		else of=0;
		if(y==nian) h=12-yue;//t=28+g-ri;
		else h=0;
		for(m=1;m<=12-h;m++)
		{	switch(m)
				{
				case 1:case 3:case 5:case 7:case 8:case 10:case 12:g=3;break;
				case 2:g=of;break;
				case 4:case 6:case 9:case 11:g=2;break;
				}
				if(y==nian&&m==yue) t=28+g-ri;
				else t=0;
			for(d=1;d<=28+g-t;d++)
			{
			n++;
			if(d==13&&n%7==5) printf("��%d��,%d,%d,%d����%d\n",n,y,m,d,n%7);	
			}	
		}
	}
	printf("���ϼ�Ϊ���ҵ������еĺ�ɫ������\n");
	system("pause");

}
