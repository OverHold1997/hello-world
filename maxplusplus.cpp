#include<iostream>
using namespace std;
class Array_max//声明类 
{
	public://以下三行为成员函数原型声明 
		void set_value();//对数组元素设置值 
		void max_value();//找出数组中最大元素 
		void show_value();//输出最大值 
	private:
		int array[10];//整型数组 
		int max;//max用来存放最大值 
}; 
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
	cout<<"max="<<max;
}
int main()
{
	Array_max arrmax;//定义对象arrmax 
	arrmax.set_value();//调用arrmax的set_value函数，向数组元素输入数值 
	arrmax.max_value();//调用arrmax的max_value函数，找出数组元素中的最大值 
	arrmax.show_value();//调用arrmax的show_value函数，输出数组元素中的最大值 
	return 0;
}
