#include <stdio.h>
#include <cs50.h>
int swap_max( int arr[],int l, int n)
{ int max=arr[n]; int pos =n;
  for( int i=n;i<l;i++)
  {    if(arr[i]>max)
        { max=arr[i];
          pos=i;
          arr[pos]=arr[n];
          arr[n]=max;
      }
 }
 return 0;
}
 
 int ssort(int arr[],int l)
 { for(int i=0;i<l;i++)
   {swap_max(arr,l,i);
   }
   printf("Sorted Array \n");
   for(int i=0;i<l;i++)
   { printf("%i| \n",arr[i]);}
  return 0;
  }
