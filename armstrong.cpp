 #include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,s=0,i,j,b;
	cout<<"limit of armstrong no.";
	cin>>a;
	for(i=1;i<=a;i++)
	{
		j=i;
		s=0;
		while(j!=0)
		{
		b=(j%10);
		s=s+(b*b*b);
		j=j/10;
		}
		if(s==i)
			cout<<i<<endl;
	}	
}
