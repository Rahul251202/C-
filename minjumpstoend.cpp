#include<iostream>
using namespace std;
void jump(int arr[],int n){
	int jumps=0;
	int pos=0;
	int des=0;
	for(int i=0; i<n; i++){ 
		des= max(des,arr[i]+1);
        if(pos==i){
             pos=des;
			 jumps++;

		}		
		
	}
	cout<<jumps+1;
}
int main(){
	int arr[]={1,3,6,1,0,9};
	int n= sizeof(arr)/sizeof(arr[0]);
	jump(arr,n);
	return 0;
}