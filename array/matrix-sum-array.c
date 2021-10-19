#include<stdio.h>
int main(){
int a,b;
printf("This program prints the sum of entered matrix\n");
printf("Enter the row of  matrix:");
scanf("%d",&a);
printf("\n");
printf("Enter the column of matrix:");
scanf("%d",&b);
printf("\n");
int first[a][b];
int second[a][b];
int sum[a][b];
printf("enter elements for first matrix\n");
for(int i=0; i<a; i++){
    for (int j=0;j<b; j++){
 scanf("%d",&first[i][j]);
     }
}
printf("enter elements for second matrix\n");
for(int i=1; i<=a; i++){
    for (int j=1;j<=b;j++){
scanf("%d",&second[i-1][j-1]);
    }

}
printf("The sum of matrix are\n");
for(int i=1;i<=a;i++){
    for (int j=1; j<=b; j++){
        sum[i-1][j-1]=first[i-1][j-1]+second[i-1][j-1];
        printf("%d\t",sum[i-1][j-1]);
    }
    printf("\n");
} 
}

