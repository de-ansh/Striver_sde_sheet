#include <bits/stdc++.h>
using namespace std;
/*int sum_ton(int n){
	if(n==0)
		return 0;
	int d=n%10;
	return sum_ton(n/10)+d;

}*/
void patternPrint(int n){
	if (n==1)
	{
		cout<<1<<"\n";
		return;
	}
	
	for (int i = 1; i <=n ; ++i)
	{
		cout<< i <<" ";
	}
	cout<<"\n";
	patternPrint(n-1);
	for (int i = 1; i <=n ; ++i)
	{
		cout<< i <<" ";
	}
	cout<<"\n";
	
}
int fib(int n){
	if(n==1)
		return 0;
	if(n==2)
		return 1;

	return fib(n-1)+fib(n-2);
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<fib(n);
}
//40.7