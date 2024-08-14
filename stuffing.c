#include<stdio.h>
int main(){

 char arr[100];
 static char arr2[100];
 int i,j=0;
 
 printf("Enter the string:");
 gets(arr);

for(i=0;arr[i]!='\0';i++){
   if(arr[i]=='$'){
      arr2[j++]='$';
      arr2[j++]='$';
      }else{
      arr2[j++]=arr[i];
   }
 }

 printf("The data is manipulated $%s$",arr2);
 return 0;

}