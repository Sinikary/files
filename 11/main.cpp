#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;


int main(int argc, char** argv) {
	setlocale(LC_ALL,"Russian");
	
	short int n=5;
	int arr[n][n];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=1+rand()%8;
			cout<<" "<<arr[i][j];
		}
		cout<<endl;
	}
	
	int sum=0;
	
	for(int j=0;j<n;j++){
		sum=0;
		for(int i=0;i<n;i++){
			sum+=arr[j][i];
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
