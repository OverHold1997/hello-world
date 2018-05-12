#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int pl(int *q,int n);
	float pl(float *p,int n);
	double pl(double *p,int n);
	int a,n;
	cout<<"你想比较什么类型数据："<<endl<<"(1)整形\n(2)单精度\n(3)双精度"<<endl<<"输入类型前的编号"<<endl;
	cin>>a;
	cout<<"请输入您需要比较数据的个数："<<endl;
	cin>>n;
	if(a==1)
	{
		int *p=new int [n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i];
		}
		pl(p,n);
	}
	if(a==2) 
	{
		double *p=new double [n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i];
		}
		pl(p,n);
	}
	if(a==3)
	{
		float *p=new float [n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i];
		}
		pl(p,n);
	}
	return 0;
}
int pl(int *q,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(q[i]>q[j])
			{
				int x;
				x=q[j];
				q[j]=q[i];
				q[i]=x;
			}
		}
	}
	for(int x=0;x<n;x++)
	{
		cout<<q[x]<<" ";
	}	
	return 0;
}
float pl(float *q,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(q[i]>q[j])
			{
				float x;
				x=q[j];
				q[j]=q[i];
				q[i]=x;
			}
		}
	}
	for(int x=0;x<n;x++)
	{
		cout<<q[x]<<" ";
	}
	return 0;
}
double pl(double *q,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(q[i]>q[j])
			{
				double x;
				x=q[j];
				q[j]=q[i];
				q[i]=x;
			}
		}
	}
	for(int x=0;x<n;x++)
	{
		cout<<q[x]<<" ";
	}
	return 0;
}
