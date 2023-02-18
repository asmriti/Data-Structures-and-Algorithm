#include <stdio.h>
#include <stdlib.h>

	struct Array {
		int A[10];
		int size;
		int length;
	};
	
	int LinearSearch(struct Array arr, int key){
		
		int i;
		
		for (i=0;i<arr.length;i++){
			if (key==arr.A[i])
				return i;
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
	struct Array arr= {34, 5, 7, 12, 10, 77};
	
	printf("%d\n", LinearSearch(arr,12));
	Display(arr);
}
