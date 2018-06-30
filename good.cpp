#include<iostream>
using namespace std;
class goods
{
  public:
  goods(int,int,float);
  void total();
  static float average();
  static void display();
  private:
  float price;
  int num;
  int my_n;
  static float discount;
  static float sum;
  static int n;
};
goods::goods(int n,int m,float p)
{
	num=n;
	my_n=m;
	price=p;
}
void goods::total()
{
    float rate=1;
    if(my_n>10)
    {
        rate=0.98*rate;
    }
    sum=sum+my_n*price*rate*(1-discount);
    n=n+my_n;
}
void goods::display()
{
	cout<<"the total money:"<<endl;
    cout<<sum<<endl;
    cout<<"the average price:"<<endl;
    cout<<average()<<endl;
}
float goods::average()
{
    return (sum/n);
}
float goods::discount=0.05;
float goods::sum=0;
int goods::n=0;
int main()
{
    goods g1(101, 5, 23.5);
    goods g2(102, 12, 24.56);
    goods g3(103, 100, 21.5);

    g1.total();
    g2.total();
    g3.total();

    goods::average();
    goods::display();

    return 0;
}
