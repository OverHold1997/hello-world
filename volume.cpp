#include <iostream>
using namespace std;
class Box
{
   private:
   double length,width,hight;
   public:
   void get_value();
   double volume();
   void display();
};
void Box::get_value()
{
    cin>>length>>width>>hight;
}
double Box::volume()
{
    return length*width*hight;
}
void Box::display()
{
	cout<<volume()<<endl;
} 
int main()
{
    Box box;
    box.get_value();
    cout << "volmue of box is ";
    box.display();
    return 0;
}
