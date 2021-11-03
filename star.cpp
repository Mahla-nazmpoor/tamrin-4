#include<iostream>
using namespace std;


int main()
{   int a,b;
	cout<<"enter number of row: ";
	cin>>a;
	cout<<"enter number of column: ";
	cin>>b;
	
	for(int i=1;i<=a;i++)
	{  
	  cout<<endl;
		for(int j=1;j<=b;j++)
		{
		
			if(j%2!=0)
			cout<<"#";
			else if(j%2==0)
			cout<<"*";
		}
	}
	
}