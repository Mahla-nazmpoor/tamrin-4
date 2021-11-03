#include <iostream>
using namespace std;

int bmm(int a,int b)
{
    if(b==0)
            return a;
    return bmm(b,a%b);
}
 
int kmm(int a, int b)
{
    return a*b/bmm(a, b);
}

int main() 
{
	int c,d;
	cout<<"enter number 1: ";
	cin>>c;
	cout<<"\n"<<"enter number 2: ";
	cin>>d;
	
	cout<<"\n"<<"kmm is = "<<kmm(c,d);
	return 0;
}