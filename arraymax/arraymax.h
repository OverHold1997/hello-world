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