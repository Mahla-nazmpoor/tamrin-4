#include <iostream>
using namespace std;


int bmm(int a,int b)
{
    if(b==0)
            return a;
    return (b,a%b);
}

int main()
{
	int x,y;
	cout<<"enter number 1: ";
	cin>>x;
	cout<<endl<<"enter number 2: ";
	cin>>y;
	
	cout<<endl<<"bmm is: "<<bmm(x,y);
}