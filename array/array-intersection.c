
#include<stdio.h>

void final(int intersection[], int n){
    
for (int i = 0; i < n-1; i++)
  {
    
    for (int j = i+1; j < n; j++)
    {
      if (intersection[i] == intersection[j]){
        for(int k=j; k<n; k++ ){
          intersection[k]=intersection[k+1];
        }
        n--;
        j--;
      }
    }
  }
        
 printf("The intersection of the given sets are:\n");
  for(int i=0; i<n; i++){
    printf("%d\n",intersection[i]);
}
}
int main(){
    int a,b;
    int n=0;
    printf("Enter the number of elements in first set:");
    scanf("%d",&a);
    printf("Enter the number of elements in second set:");
    scanf("%d",&b);
     int first[a];
    int second[b];
    int intersection[a+b];
    
    printf("Enter the elements for first set:\n");
    for(int i=0;i<a;i++){
        scanf("%d",&first[i]);
    }
    printf("Enter the elements for second set:\n");
    for(int i=0;i<b;i++){
        scanf("%d",&second[i]);
    }
    for (int i=0; i<a; i++){
        for(int j=0;j<b; j++){
            if(second[j]==first[i]){
                 intersection[n]=first[i];
                n++;
            }
        }
    }

final(intersection,n);

return 0;
}


