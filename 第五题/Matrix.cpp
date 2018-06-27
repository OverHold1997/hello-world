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
	 for(int j=0;j<3;j++)
	   {
	   	c.mat[i][j]=a.mat[i][j]+b.mat[i][j];
	   }
	
	return c;
}
istream& operator>>(istream&in,Matrix&m)
{
	cout<<"ÇëÊäÈë¾ØÕó£º"<<endl;
	for(int i=0;i<2;i++)
	 for(int j=0;j<3;j++)	   
	   	in>>m.mat[i][j];	  	
	return in;
}
ostream& operator<<(ostream &out,Matrix &m)
{
	for(int i=0;i<2;i++)
     {for(int j=0;j<3;j++)
	   
	   	out<<m.mat[i][j]<<" ";
	   	out<<endl;
	   }
	return out;
}

