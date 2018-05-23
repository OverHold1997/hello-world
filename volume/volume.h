#include <iostream>
using namespace std;
class Box
{
private:
	float length,width,height;
public:
	void set_lwh(void);
	float volume();
	void Print(void);
};