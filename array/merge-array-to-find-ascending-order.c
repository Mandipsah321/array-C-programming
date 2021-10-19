#include<stdio.h>
int *mergearray(int first[], int second[],int a, int b,int merge[])
{
     merge[a+b];
    int temp;
    for(int i=0;i<a;i++)
    {
        merge[i]=first[i];
    }
    for(int j=0;j<b;j++)
{
    merge[j+a]=second[j];
}
for(int i=0;i<a+b;i++){
	for(int j=i+1;j<a+b;j++){
		if(merge[j]<merge[i])
		{
			temp=merge[i];
			merge[i]=merge[j];
			merge[j]=temp;
		}
	}
}
return merge;
}

int main(){
    int m;
    int n;
    printf("Enter the number of elements in the first group:");
    scanf("%d",&m);
    int first[m];
    printf("Enter the elements in ascending order:\n");
    for(int i=0; i<m; i++)
    {
        scanf("%d",&first[i]);
    }
         printf("Enter the number of elements in the second group:");
    scanf("%d",&n);
    int second[n];
    int merge[m+n];
    printf("Enter the elements in ascending order:\n");

    for(int i=0; i<n; i++)
    {
        scanf("%d",&second[i]);
    }
    int *ptr=mergearray(first, second,m,n, merge);
    printf("The numbers obtained in ascending order by merging both groups are:\n");
    for (int i=0;i<m+n; i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}
