#include<stdio.h>
main(){
	
	int size,i;
	
	printf("enter the array's size:");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter array elements:\n");
	for(i=0;i<5;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
		
	}
	
	printf("negative elements from array: ");
	int neg = 0;
	for(i=0;i<5;i++){
		if(arr[i]<0){
		 	printf("%d",arr[i]);
		    neg = 1;	
		}
	
	}
	if(!neg){
		printf("none");
	}
	
	printf("\n");
}
