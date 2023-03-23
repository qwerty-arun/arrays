# include <stdio.h>
int main()
{
  int size,key,pos,c=0;
  printf("Enter size of the array: \n");
  scanf("%d",&size);
  int a[size];
  printf("Enter elements of the array: \n");
  for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
  printf("Enter key element to be deleted from the array: \n");
scanf("%d",&key);
for(int i=0;i<size;i++)
{
  if(a[i]==key)
  {
    pos=i;c++;
  }
}
if(c==0)
{
printf("Element not found! \n");
}
for(int i=pos;i<size;i++)
a[i]=a[i+1];
printf("The new array after deleting the key element: \n");
for(int i=0;i<size-1;i++)
printf("%d\t",a[i]);
printf("\n");
}
