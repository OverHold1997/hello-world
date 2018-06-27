#include "Matrix.h"
Matrix::Matrix()
{
	for(int i=0;i<2;i++)
	{ for(int j=0;j<3;j++)
	   {
	   	mat[i][j]=0;
	   }
	}
}

Matrix operator+(Matrix &a,Matrix &b)
{
	Matrix c;
	for(int i=0;i<2;i++)
	{ for(int j=0;j<3;j++)
	   {
	   	c.mat[i][j]=a.mat[i][j]+b.mat[i][j];
	   }
	}
	return c;
}
void Matrix::input()
{
	cout<<"inupt matrix:"<<endl;
	for(int i=0;i<2;i++)
	{ for(int j=0;j<3;j++)
	   {
	   	cin>>mat[i][j];
	   }
	}
}
void Matrix::display()
{
	for(int i=0;i<2;i++)
	{ for(int j=0;j<3;j++)
	   {
	   	cout<<mat[i][j]<<" ";
	   }
	   cout<<endl;
	}
}

