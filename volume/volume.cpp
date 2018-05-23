#include "volume.h"
void Box::set_lwh(void)
{
	cin>>length>>width>>height;
}
float Box::volume()
{
	return length*width*height;
}
void Box::Print()
{
	cout<<volume()<<endl;
}