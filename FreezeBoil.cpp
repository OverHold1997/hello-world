#include <iostream>//为使用cout endl; 
using namespace std;
const float FREEZE_PT=32.0;//水的冰点 
const float BOIL_PT=212.0;//水的沸点 
int main()
{
	float avgTemp;//保存对冰点与沸点的平均结果 
	cout<<"What freezes at "<<FREEZE_PT<<endl;
	cout<<"and boils at "<<BOIL_PT<<endl;
	avgTemp=FREEZE_PT+BOIL_PT;
	avgTemp=avgTemp/2.0;
	cout<<"Halfway between is ";
	cout<<avgTemp<<" degrees."<<endl;
	return 0;
}
