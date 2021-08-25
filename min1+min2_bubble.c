#include<stdio.h>
int main(){
	int i,j,a;
	int sum;
	int n=3;
	int number[3];
	printf("Enter Number 3 Number :");
	for(i=0;i<n;++i){
		scanf("%d",&number[i]);
	}
	for(i=0;i<n;++i){
		for(j=i+1;j<n;++j){
			if(number[i]>number[j]){
				a=number[i];
				number[i]=number[j];
				number[j]=a;
			}
		}
	}
	sum=number[0]+number[1];
	printf("Sum(min1+min2) = %d",sum);
	return 0;
}