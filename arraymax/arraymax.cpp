#include "arraymax.h"
void Array_max::set_value()//��Ա�������壬������Ԫ�������ֵ 
{
	int i;
	for(i=0;i<10;i++)
	{
		cin>>array[i];
	}
}
void Array_max::max_value()//��Ա�������壬�ҳ�����Ԫ���е����ֵ 
{
	int i;
	max=array[0];
	for(i=0;i<10;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
	}
}
void Array_max::show_value()//��Ա�������壬������ֵ 
{
	cout<<"max="<<max<<endl;
}