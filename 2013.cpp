#include<iostream>
using namespace std;
int main(void)
{
	int n;
	while(cin>>n)
	{
		n--;
		int sum=1;
		while(n--)
			sum=(sum+1)*2;
		cout<<sum<<endl;
	}
	return 0;
}