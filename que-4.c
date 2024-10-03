#include <stdio.h>

main(){
	
	int i, j, row, col;		
	
	int rowsum, colsum, rownum, colnum; 
	
	printf("Enter the rows: ");	
	scanf("%d",&row);
	
	printf("Enter the cols: "); 	
	scanf("%d",&col);
	
	int arr[row][col];
	
	
	for(i=0; i<row; i++){ 	
		
		for(j=0; j<col; j++){
			
			printf("Enter the element of [%d][%d] : ",i,j); 	
			scanf("%d",&arr[i][j]);
			
		}
	}
	

	
	
	for(i=0; i<row; i++){ 	
		
		for(j=0; j<col; j++){
			
			printf("%d ",arr[i][j]);	
			
		}
		
		printf("\n");
	}
	

	
	printf("Enter the rows: "); 
	scanf("%d",&rownum);
	
	rowsum = 0;
	
	printf("The element of row %d: ", rownum);  
	
	for( i=0; i<col; i++){ 		
		
		printf("%d ",arr[rownum][i]);
		rowsum += arr[rownum][i];
	}
	
	printf("\nThe sum of row %d: %d",rownum,rowsum); 	
	
	

	
	printf("\nEnter the cols: ");		
	scanf("%d",&colnum);
	
	colsum = 0;
	
	printf("The element of col %d: ",colnum);	
	
	for( i=0; i<row; i++){		
		printf("%d ",arr[i][colnum]);
		colsum += arr[i][colnum];
	}
	
	printf("\nThe sum of col %d: %d",colnum,colsum);
	
}
