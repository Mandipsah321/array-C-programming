#include<stdio.h>

int findmax(int arr[],int a){
int max=-1;
for(int i=0;i<a;i++){
if(arr[i]>max)
max=arr[i]; // note: we cannot compare pointer with integer rather we can put the value of pointer in a integer and then compare it. Its example is given below.
}
return max;
}

void main(){
int n;

printf("Enter the number of numbers present to compare\n");
scanf("%d",&n);
int arr[n];
for (int i=0;i<n;i++){
printf("enter the %d number: ",i+1);
scanf("%d",&arr[i]);
}
int result=findmax(arr,n);
printf("%d is maximum",result);
}
// The following is also possible
/*
#include<stdio.h>

int findmax(int *arr,int a){
int max=-1;
for(int i=0;i<a;i++){
    int j = *(arr+i);
if(j>max)
max=j;
}
return max;
}

void main(){
int n;

printf("Enter the number of numbers present to compare\n");
scanf("%d",&n);
int arr[n];
for (int i=0;i<n;i++){
printf("enter the %d number: ",i+1);
scanf("%d",&arr[i]);
}
int result=findmax(arr,n);
printf("%d is maximum",result);
}
*/
