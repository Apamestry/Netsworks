#include <stdio.h>
int main()
{
    static char arr[100];
    static char arr1[100];

    int cnt = 0, cfz = 0;

    printf("Enter data in the form of bits:");
    gets(arr);
    int j = 0;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == '1' && arr[i + 1] == '0')
        {
            cnt = 0;
            arr1[j++] = arr[i];
        }
        else
        {
            if (arr[i] == '1')
            {
                cnt++;
                if (cnt == 5)
                {

                    arr1[j++] = '1';
                    arr1[j++] = '0';
                    cnt = 0;
                }
                else
                {
                    arr1[j++] = arr[i];
                }
            }
            else
            {
                arr1[j++] = arr[i];
            }
        }

        if (cnt == 5 && arr[i + 1] == '0')
        {
            arr1[j++] = '0';
            arr1[j++] = '0';
        }
        
    }

    printf("(01111110) %s (01111110)", arr1);
    return 0;
}