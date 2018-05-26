#include "student.h"
void max(student *arr)
{	
	{
		float max_score=arr[0].score;
		int k=0;
		for(int i=1;i<5;i++)
		{
			if(arr[i].score>max_score)
			{
				max_score=arr[i].score;
				k=i;
			}
		}
		cout<<arr[k].stunum<<" "<<max_score<<endl;
}

}