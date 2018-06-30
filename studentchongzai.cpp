#include<iostream>
#include<string> 
using namespace std;
class student
{
    private:
    string name;
    int num;
    int score;
    public:
    student(string,int,int);
    student()
	{cout<<"Input student's information,please:"<<endl;}
    friend ostream& operator<<(ostream&,student&);
    friend istream& operator>>(istream&,student&);
};
student::student(string nam,int n,int s)
{
	name=nam;
	num=n;
	score=s;
}
istream& operator>>(istream &in,student &m)
{
	in>>m.name>>m.num>>m.score;
}
ostream& operator<<(ostream &out,student &n)
{
	out<<n.name<<"\t"<<n.num<<"\t"<<n.score<<endl;
}
int main()
{
	student stu1("marry",1001,98);
	cout << stu1 << endl;
	student stu2;
	cin >> stu2;
	cout << stu2 << endl;
	return 0;
}

