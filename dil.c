#include <stdio.h>

int main()
{
    int n;

    int arr[4][10];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            printf("\nEnter the elements of arr[%d][%d]=", i, j);
            scanf("%d",&n);
            arr[i][j] = n;
        }
    }

    return 0;
}
