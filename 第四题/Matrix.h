#include<iostream>
using namespace std;
class Matrix
{
	private:
		int mat[2][3];
	public:
	    Matrix();
	    friend Matrix operator+(Matrix &,Matrix &);	
		void input();
		void display();
};
