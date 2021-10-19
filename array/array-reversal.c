#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number of elements: \n");
    scanf("%d", &num);
    printf("Enter the numbers\n");
    int arr[num];
    for(int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
printf("The numbers after reversal are:\n");
    for(int i = num-1; i>=0; i--){
        printf("%d \n", arr[i]);
    }
    return 0;
}

