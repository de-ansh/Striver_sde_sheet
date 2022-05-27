#include<bits/stdc++.h>
using namespace std;
void findmissingandrepeating(int arr[],int n){

	vector<int> freq(n+1, 0);
	vector<int>ans;
	for(int i=0;i<n;i++)
	{
		freq[arr[i]]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(freq[i]==0|| freq[i]>1)
			ans.push_back(i);
		
	}
	for(auto it:ans)
		cout<<it<<" ";
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	findmissingandrepeating(arr,n);
	return 0;
}