// program to get number of prime numbers in 1 to N
//voila
#include<bits/stdc++.h>
using namespace std;
bool getallprime(int n)
{
   int count=0;
   
for (int i = 1; i*i <= n ; ++i)
{
      if(n%i==0)
      {   if(i*i==n)
      	count++;
      	else
      	count+=2;
      if(count>2)
      	break;
  }
}
if(count==2)
	return true;
return 	false;

}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
	#endif
	int n,count=0;
	cin>>n;
	for (int i = 2; i <= n; ++i)
	{
		if(getallprime(i))
			count++;
	}
	
cout<<count;
return 0;
}
// time complexity
// n*root n
