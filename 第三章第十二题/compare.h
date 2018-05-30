#include<iostream>
using namespace std;
template<class numtype>
class Compare
{
	public:
		Compare(numtype a,numtype b);
		numtype max();
		numtype min();
	private:
		numtype x,y;
};
template <class numtype>
Compare<numtype>::Compare(numtype a,numtype b)
{
	x=a;
	y=b;
}
template<class numtype>
numtype Compare<numtype>::max()
{
	return (x>y)?x:y;
}
template<class numtype>
numtype Compare<numtype>::min()
{
	return (x<y)?x:y;
}
