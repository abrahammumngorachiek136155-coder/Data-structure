#include<stdio.h>

void main()

{
    int a[10],i,j,temp;
    for(i=0;i<10;i++)
{


    printf("\n Enter value %d :",i+1);
    scanf("%d",&a[i]);

for(i=0;i<10;i++)
{
    for(j=0;j<10;j++)
    {

    if(a[i]>a[j])
    {

  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
}

}

}

printf("\n Sorted Elements are as follows\n");
for(i=0;i<10;i++)
{
    printf("\n %d",a[i]);

}

}


}

