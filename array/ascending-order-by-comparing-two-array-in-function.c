#include<stdio.h>

int  *merge(int *arr1,int *arr2,int *final,int size1, int size2){
    int i=0;
    int j=0;
    int k=0;
    while(i<size1 && j<size2){
        if(arr1[i]<=arr2[j]){
            final[k]=arr1[i];
            i++;
        }
        else{
            final[k]=arr2[j];
            j++;
        }
    k++;
    }
    while(i<size1){
        final[k]=arr1[i];
        i++;
        k++;
    }
    while(j<size2){
        final[k]=arr2[j];
        j++;
        k++;
    }
    return final;
} 

int  main(){
    int m, n;
    printf("Enter the number of elements in the first group: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter the elements of first group in ascending order :\n");
    for(int i=0; i<m; i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the number of elements in the second group: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter the elements of second group in ascending order :\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr2[i]);
    }

    int final[m+n];
int *p = merge(arr1,arr2,final,m,n);
printf("The elements in ascending order after sorting both groups are:\n");
    for(int i=0;i<m+n;i++){
        printf("%d ",p[i]);
    }
    
}

