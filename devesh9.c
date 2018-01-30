#include <stdio.h>
void main()
{ int i,n,a[100],k,s=0;
  printf("enter the  size of array ");
  scanf("%d", &n);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  printf("enter the  number k ");
  scanf("%d", &k);
  
  for(i=0;i<k;i++)
     s+=a[i];
  
  printf("%d \n",s);
 
}
