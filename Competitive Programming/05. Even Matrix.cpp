#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

lli check(lli ts)
{
	if(ts%4 != 0)
		return (ts-2)/4;
	return check(ts/2);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%2)
		{
			int counter = 0;
			for(int i =0; i<n; i++)
			{
				for(int j=0; j<n; j++)
				{
					counter++;
					cout<<counter<<" ";
				}
				cout<<endl;
			}
		}
		else
		{
			int counter = 0;
			for(int i =0; i<n; i++)
			{	
				if(i%2 == 0)
				{
					for(int j=0; j<n; j++)
					{
						counter++;
						cout<<counter<<" ";
					}
					cout<<endl;	
				}
				else
				{
					counter += n;
					for(int j=0; j<n; j++)
					{
						cout<<counter<<" ";
						counter--;
					}
					cout<<endl;
					counter += n;
				}
				
			}
		}
	}

	return 0;
}