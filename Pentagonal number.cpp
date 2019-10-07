#include<iostream>
using namespace std;

int valid(int x)
{
	int i=0;
	int y;
	do
	{
		y=(3*i*i-i)/2;
		i++;
	}while(y<x);
	if(y==x)
		return 1;
	else
		return 0;
}

int main()
{
	int m,n,pair1=0,pair2=0,result=0;
	int i=1;
	while(1)
	{
		i++;
		n = (3*i*i-i)/2;
		for(int j=i-1;j>0;j--)
		{
			m = (3*j*j-j)/2;
			if(valid(n-m) && valid(n+m))
			{
				result = n-m;
				pair1=i;
				pair2=j;
				break;
			}
		}
		if(result!=0)
			break;
	}
	cout<<"The solution is for "<<pair1<<"th and "<<pair2<<"th pentagonal number."<<endl;
	cout<<"The value of D is "<<result;
}
