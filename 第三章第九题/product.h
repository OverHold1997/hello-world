#include<iostream>
using namespace std;
class Product
{
	private:
		int num;
		int quantity;
		float price;
		static float discount;
		static float sum;
		static int n;
	public:
		Product(int m,int q,float p):num(m),quantity(q),price(p){};
		void total();
		static float average();
		static void display();
};
