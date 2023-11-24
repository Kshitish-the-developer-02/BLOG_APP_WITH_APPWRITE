#include <stdio.h>
int main()
{

    int B1[4];
    int B2[4];
    int carry = 0;
    int sum[] = {0, 0, 0, 0};
    int check_sum[4];
    int i, j, k;

    for (i = 0; i < 4; i++)
    {
        printf("enter bit at %d position \n", i);
            scanf("%d", &B1[i]);
        for (k = 0; k < 4; k++)
        {
            printf("enter bit at %d position \n", k);
            scanf("%d", &B2[k]);
            
        }
    }

    for (j = 3; j >= 0; j--)
    {
        int temp1 = carry;
        carry = (carry & sum[j] | sum[j] & B1[j] | B1[j] & carry);
        sum[j] = carry ^ sum[j] ^ B1[j];
    }

    if (carry == 1)
    {
        for (j = 3; j >= 0; j--)
        {
            int temp2 = carry;
            carry = carry & sum[j];
            sum[j] = sum[j] ^ temp2;
        }
    }

    printf("\nCheck sum\n");
    for (j = 0; j < 4; j++)
    {
        if (sum[j] == 0)
        {
            check_sum[j] = 1;
        }
        else
        {
            check_sum[j] = 0;
        }
    }

    for (j = 0; j < 4; j++)
    {
        printf("%d\t", check_sum[j]);
    }
}
