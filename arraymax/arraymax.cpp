#include "arraymax.h"
void Array_max::set_value()//成员函数定义，向数组元素输出数值 
{
	int i;
	for(i=0;i<10;i++)
	{
		cin>>array[i];
	}
}
void Array_max::max_value()//成员函数定义，找出数组元素中的最大值 
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
void Array_max::show_value()//成员函数定义，输出最大值 
{
	cout<<"max="<<max<<endl;
}