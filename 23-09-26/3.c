#include <stdio.h>
int runLength(int a[], int n, int i){
	if(a[i]==0)
		return 0;
	int count=0;
	for(int j=i;j<n && a[j]==1; j++){
		count=count+1;
		return count;}
	int main(){
		int n,k;
		
		printf("enter n and k:");
		scanf("%d %d", &n,&k);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);

		output=runLength(

