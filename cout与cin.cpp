//演示cout与cin函数 
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int year,month,day;
	cout<<"Enter tne month,day,and the year in integer form."
	<<endl;
	cin>>month>>day>>year;
	cout<<month<<"/"<<day<<"/"<<year;
	return 0;
}
