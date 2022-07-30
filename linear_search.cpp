#include <iostream>
using namespace std;

int main(){
	int arr[] = {0,1,2,2,4};
	int k = 2;
	for(int i = 0; i<5; i++)
	{
		if(arr[i] == k)
			cout<<i<<"\n"; 
	}
}