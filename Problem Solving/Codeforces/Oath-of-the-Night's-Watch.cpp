
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	int counter=0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
for(int i=0;i<n;i++){
    //cout<<arr[i] << " > " <<  arr[0]<<" && "<< arr[i] <<" < "<<arr[n-1] <<endl;
	if(arr[i]>arr[0]&&arr[i]<arr[n-1])  /// maNE 1ST THEKE kew boro & last theke jara choto tader number/ soman jara soman tara boro na choto na emni bad
        counter++;
}
	 cout<<counter;
	return 0;
}
