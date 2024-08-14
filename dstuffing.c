#include<stdio.h>
int main(){

 char arr[100];
 static char arr2[100];
 int i,j=0;
 printf("Enter the string:");
 gets(arr);

if(arr[0]=='$' && arr['\0']=='$'){
    for(i=0;arr[i]!='\0';i++){
        if(arr[i]=='$'&& arr[i+1]!='$'){
                printf("error becuse only one $ is present");
                break;
            }
        if(arr[i]=='$'&& arr[i+1]=='$'){
            arr2[j]=arr2[j+1];
            }else{arr2[j++]=arr[i];
            
            }            
        }
   }else{
    printf("Error\n");
 }
 printf("The data after destuffing %s",arr2);
 return 0;

}
