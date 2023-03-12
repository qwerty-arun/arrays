# include <stdio.h>
int main()
{
  int pos,key,size;
printf("Enter the size of the array: \n");
scanf("%d",&size);
int a[size+1];
printf("Enter elements in the array: \n");
for(int i=0;i<size;i++)
  scanf("%d",&a[i]);
printf("Enter element to be added to the array: \n");
scanf("%d",&key);
printf("Enter index position where the element needs to be added: \n");
scanf("%d",&pos);
for(int i=size;i>pos;i++)
{
  a[i]=a[i-1];
}
a[pos]=key;
printf("The new array after adding the element: \n");
for(int i=0;i<=size;i++)
printf("%d",a[i]);
printf("\n");
}
