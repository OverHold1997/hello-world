#include "product.h"
int main()
{
	Product Pro[3]={Product(101,5,23.5),Product(102,12,24.56),Product(103,100,21.5)};
	int i;
	for(i=0;i<3;i++)
	{
		Pro[i].total();
	}
	Product::display();
	return 0;
}
