#include<stdio.h>
void final(int arr[], int n){
    for (int i = 0; i < n-1; i++)
  {
    
    for (int j = i+1; j < n; j++)
    {
      if (arr[i] == arr[j]){
        for(int k=j; k<n; k++ ){
          arr[k]=arr[k+1];
        }
        n--;
        j--;
      }
    }
  }
        
 printf("The union of the given sets are:\n");
  for(int i=0; i<n; i++){
    printf("%d\n",arr[i]);
}
}
int main() {
  int a,b;
    printf("Enter the number of elements in first set:");
    scanf("%d",&a);
    printf("Enter the number of elements in second set:");
    scanf("%d",&b);
     int first[a];
    int second[b];
    int arr[a+b];
    
    printf("Enter the elements for first set:\n");
    for(int i=0;i<a;i++){
        scanf("%d",&first[i]);
        arr[i]=first[i];
    }
    printf("Enter the elements for second set:\n");
    for(int i=0;i<b;i++){
        scanf("%d",&second[i]);
        arr[a+i]=second[i];
    }
    final(arr, a+b);
    
return 0;
}
