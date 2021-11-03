#include <iostream>
using namespace std;
int main() 
{
    int num, sum = 1;
    cout << "enter the check factiral number: ";
    cin >> num;
    for (int i = 1; i<num ; ++i)
        {
        	if(sum<num)
        		sum=sum*i;
		}
    if (sum == num)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}