#include<stdio.h>
//int *sortarray (int arr[], int n) is also possible.
int *sortarray(int *arr,int n){
int temp;
for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
		if(arr[j]<arr[i])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
}
return arr;
}

void main(){
int a;
printf("Enter the number of numbers present to compare:  ");
scanf("%d", &a);
int arr[a];
for(int i=0; i<a; i++){
printf("Enter the %d number: ", i+1);
scanf("%d", &arr[i]);
}
int *p=sortarray(arr,a);
printf("The numbers in ascending order are :");

for(int i=0;i<a;i++){
printf(" %d ",p[i]);
}

}


// The below written program is also possible
/*#include<stdio.h>

int sortarray(int array[],int n){
int temp;
for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
		if(array[j]<array[i])
		{
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
		}
	}
}
printf("The numbers in ascending order are:");
for(int i=0;i<n;i++){
    printf("%d\n",array[i]);
}
return 0;
}

void main(){
int a;
printf("Enter the number of numbers present to compare:  ");
scanf("%d", &a);
int arr[a];
for(int i=0; i<a; i++){
printf("Enter the %d number: ", i+1);
scanf("%d", &arr[i]);
}
sortarray(arr,a);
}
*/


//The below written program is also possible
/*
#include<stdio.h>
int *sortarray(int *arr,int n){
int temp;
for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
		if(*(arr+j)<*(arr+i))
		{
			temp=*(arr+i);
			*(arr+i)=*(arr+j);
			*(arr+j)=temp;
		}
	}
}
return arr;
}

void main(){
int a;
printf("Enter the number of numbers present to compare:  ");
scanf("%d", &a);
int arr[a];
for(int i=0; i<a; i++){
printf("Enter the %d number: ", i+1);
scanf("%d", &arr[i]);
}
int *p=sortarray(arr,a);
printf("The numbers in ascending order are :");

for(int i=0;i<a;i++){
printf(" %d ",*(p+i));
}

}

}
*/
