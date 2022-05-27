#include <bits/stdc++.h>
using namespace std;
/*int finddup(int arr[],int n){
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		if(arr[i]==arr[i+1])
			return arr[i];
	}
	return -1;
}
//optimal
int finddup(int arr[],int n) {
  
  int freq[n + 1] = {
    0
  };
  for (int i = 0; i < n; i++) {
    if (freq[arr[i]] == 0) {
      freq[arr[i]] += 1;
    } else {
      return arr[i];
    }
  }
  return 0;
}*/
int finddup(int arr[], int n){
	int slow = arr[0];
  int fast = arr[0];
  do {
    slow = arr[slow];
    fast = arr[arr[fast]];
  } while (slow != fast);
  fast = arr[0];
  while (slow != fast) {
    slow = arr[slow];
    fast = arr[fast];
  }
  return slow;
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
	cout<<finddup(arr,n);
	return 0;
}