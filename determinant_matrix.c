# include <stdio.h>
int main()
{
  int n,det=0;
  printf("Enter order of matrix(n*n): \n");
  scanf("%d",&n);
  printf("Enter elements of the array: \n");
  int a[n][n];
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
  if(n==2)
  {
    det=a[0][0]*a[1][1]-a[0][1]*a[1][0];
  }
  if(n==3)
    
    {
    det=(a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2]))-(a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2]))+(a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]));
  }
  printf("The determinant of the matrix: %d \n",det);
}
