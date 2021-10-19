#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

     int start=0;
     int end=2*n-1;
     int size=2*n-1;
      int arr[size][size];
      while (n>0) {
      for (int i=start; i<end; i++) {
          for (int j=start; j<end; j++) {
              arr[i][j]=n;
          }
      }
          n--;
          start++;
          end--;
      }
      for (int i=0; i<size; i++) {
      for (int j=0; j<size; j++) {
      printf("%d ",arr[i][j]);
      }
      printf("\n");
      }
    return 0;
}

