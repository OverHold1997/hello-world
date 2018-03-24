#include <stdio.h>
#include <ctype.h>//为issspace()函数提供原型 
#include <stdbool.h>//为bool,ture,false提供定义 
#define STOP '|'
int main(void)
{
	char c;//读入字符 
	char prev;//读入前一个字符 
	long n_chars =0L;//字符数 
	int n_lines=0;//行数 
	int n_words=0;//单词数 
	int p_lines=0;//不完整的函数 
	bool inword=false;//如果C在单词数，inword等于ture 
	char ture;
	printf("Enter text to be analyzed (| to terminate):\n");
	prev='\n';//用于识别完整的汗 
	while((c=getchar())!=STOP)
	{
		n_chars++;//统计字符 
		if(c=='\n')
		n_lines++;
		if(!isspace(c)&&!inword)
		{
			inword=ture;//开始一个新的单词 
			n_words++;//统计单词 
		}
		if(isspace(c)&&inword)
		inword=false;
		prev=c;
	}
	if(prev!='\n');
	p_lines=1;
	printf("charactes=%ld,words=%d,lines=%d,",
	        n_chars,n_words,n_lines);
	printf("partial lines=%d\n",p_lines);
	return 0;
}
