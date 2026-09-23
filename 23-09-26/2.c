#include <stdio.h>
int daysElapsed(int day, int month){
        int arr[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int totaldays= day;
	for(int i=1;i<month;i++){
		totaldays+= arr[i];}
		return totaldays;}
	int main(){
		
		int day,month,totaldays;
		printf("enter day and month:");
		scanf("%d %d", &day, &month);
		totaldays=daysElapsed(day,month);
		printf("total days: %d", totaldays);}

