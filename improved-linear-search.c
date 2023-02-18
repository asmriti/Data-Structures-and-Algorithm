#include <stdio.h>
#include <stdlib.h>

	struct Array {
		int A[10];
		int size;
		int length;
	};
	
	swap (int *x, int *y){
		int temp;
		temp=*x;
		*x=*y;
		*y=temp;
	}
	
	int LinearSearch(struct Array *arr, int key){
		
		int i;
		
		for (i=0;i<arr->length;i++){
			
			if (key==arr->A[i]){
				
				swap(&arr->A[i],&arr->A[i-1]);
					return i;
			}
			
		}
		return -1;
	}
	
	void Display(struct Array arr){
		
		int i;
		printf("\n The elements are: \n");
		for (i=0; i<arr.length; i++)
		printf("%d ",arr.A[i]);
	}
	
	int main (){
	struct Array arr= {{2,3,4,5,6},10,5};
	
	printf("%d\n", LinearSearch(&arr,3));
	Display(arr);
}
