#include<stdio.h>
#include<stdlib.h>

//function declaration
int sumArray(int array[], int size){
	int temp, i;
	for(i = 0; i < size; i++){
		temp = temp + array[i];
	}
	return temp;
}

//main function
int main()
{
	int a, sum = 0, i;
	printf("Enter the size of your array: ");
	scanf("%d", &a);
	
	int arr[a];
	printf("Enter the values of your array\n");
	for(i = 0; i < a; i++){
		printf("value %d: ",i+1);
		scanf("%d", &arr[i]);
	}
	
	//function calling
	sum = sumArray(arr,a);
	
	printf("The sum of all the values in your array is : %d", sum);
	return 0;
}
