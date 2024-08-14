#include<stdio.h>
#include<string.h>
int main(){
    static char arr[100];
    static char arr2[100];
    printf("Enter the string:");
    gets(arr);

    
    int len=strlen(arr);
    int i=0,j=0,n=0;
   
    if(arr[0]!='$' && arr[len-1] != '$')
    {
        n=0;
    }
    else{
        for(i=1;i<len-1;)
        {
            if(arr[i]=='$')
            {
            if(arr[i+1]=='$' && (i+1)!=len-1)
            {
                arr2[j++]=arr[i];
                i=i+2;
            }
            else
            {
                n=0;
                break;
            }

            }
            else{
                arr2[j++]=arr[i];
                i++;
            }
            n=1;
        }
    }
    if(n==1)
    {
        printf("%s",arr2);
    }
    else{
        printf("Error!");
    }
    return 0;
}