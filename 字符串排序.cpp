#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str[5];
	void Swap(string *p1,string *p2);
	cout<<"Please input five strings:";
	int i,j;
	for(i=0;i<5;i++)
	{
		cin>>str[i];
	}
	for(i=1;i<4;i++)
	{
		for(j=0;j<5-i;j++)
		{
			if(str[j]>str[j+1])
			{
				Swap(&str[j+1],&str[j]);
			}
		}
	}
	for(i=0;i<5;i++)
	{
		cout<<str[i]<<endl;
	}
	return 0;
}
void Swap(string *p1,string *p2)
{
	string temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
