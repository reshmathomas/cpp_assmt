#include<iostream>
using namespace std;
class Line
{
    private:
		int px, py;
		int l[10];
        
    public:
		Line()
		{
			px=5;
			py=10;
            for(int i=0;i<10;i++)
			{
				l[i]=0;
			}
            
		}
		Line(int x, int y, int larray[])
		{
			px=x;
			py=y;
			for(int i=0;i<10;i++)
			{
				l[i]=larray[i];
			}
		}
		int operator[](const int i)
		{
			if(i>=0 && i<10)
				return l[i];
			else
			{
				cout<<"Array Index out of bounds";
				
				return 0;
			}
		}
};

int main()
{ 
    int array[10];
	for(int i=0;i<10;i++)
	{
		array[i]=i;
	}
	Line la,lb(2,3,array);
	cout<<"Array value is: "<< lb[5]<<"\n";
	return 0;
}
