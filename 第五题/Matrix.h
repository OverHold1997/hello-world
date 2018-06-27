#include<iostream>
using namespace std;
class Matrix
{
	public:
		Matrix();
		friend Matrix operator+(Matrix &,Matrix &);
		friend ostream& operator<<(ostream &,Matrix &);
		friend istream& operator>>(istream &,Matrix &);
	private:
		int mat[2][3];
};
