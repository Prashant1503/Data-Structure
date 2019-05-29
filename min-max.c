#include<stdio.h>
#include<limits.h>

int main(){
   int n,i,min,s,l;
   scanf("%d\n",&n);

   int arr[n];

   for(i =0;i <n;i++){
       scanf("%d\n",&arr[i]);
   }

    s=l=INT_MIN;
   for(i =0;i <n;i++){
       if(arr[i] >l){

           s = l;
           l = arr[i];
       }
       else if(arr[i] >s && arr[i]!=l){
           s = arr[i];
       }
   }

   if(s ==INT_MIN)
   printf("\n There is no second largest element in this array");

   else 
   printf("n Second largest element is %d",s);
  
   return 0;
   
}
