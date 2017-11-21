#include <stdio.h>
#include <stdlib.h>//文件头文件 
int main()
{
	FILE  *fp;//定义文件指针 
	
	fp=fopen("D:\\文件输出.txt","w+");
	//打开已有的文件或新建一个文件 
		
	fprintf(fp,"开始学习文件操作啦！\n");
	//按文件指针指向的文件 ，写入信息 
	
	fclose(fp);//关闭文件 
	return 0;
}
