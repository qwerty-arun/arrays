# include <stdio.h>
int main()
{
  int n;
  printf("Enter order of the matrix(n*n) :\n");
  scanf("%d",&n);
  int a[n][n];
  printf("Enter the elements of the array: \n");
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
}
printf("The matrix: \n");
for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
     {
       printf("%d ",a[i][j]);
               }
    printf("\n");
}
int t[n][n];
  for(int i=0;i<n;i++)
   {
        for(int j=0;j<n;j++)
          {
          t[j][i]=a[i][j];
          }
      }
printf("The transpose of the matrix: \n");
for(int i=0;i<n;i++)
   {
        for(int j=0;j<n;j++)
           {
              printf("%d ",t[i][j]);
               }
        printf("\n");
      }
}
