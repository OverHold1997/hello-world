#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1;
	cin>>str1;
	string str2(str1.rbegin(),str1.rend());//string的反向迭代器
	cout<<str2<<endl;
	return 0;
}
