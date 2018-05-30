#include "product.h"
void Product::total()
{
	float rate=1.0;
	if(quantity>10)
	{
		rate=0.98*rate; 
	} 
	sum=sum+quantity*price*rate*(1-discount);
	n=n+quantity;
}
void Product::display()
{
	cout<<sum<<endl;
	cout<<average()<<endl;
}
float Product::average()
{
	return sum/n;
}
float Product::discount=0.05;
float Product::sum=0;
int Product::n=0;
