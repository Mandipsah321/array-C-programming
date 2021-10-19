#include<stdio.h>
void main(){
int n;
printf("Enter the number of students: ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
printf("Enter mark of %d student: ",i+1);
scanf("%d",&arr[i]);
}

int temp;
for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
		if(arr[j]<arr[i]){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		}
	}
}
printf("The marks of student in ascending order are : ");

for(int i=0;i<n;i++){

printf(" %d ",arr[i]);

}
}
