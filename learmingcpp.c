

#include <stdlib.h>
#include <stdio.h>



#include <stdlib.h>
#include <stdio.h>

int *twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int ind = 0;
     static  int pp;
    int i = 0;
    int j = 0;
    int *tab;
    tab = malloc(sizeof(int) * 2);
    if (!tab)
        return (0);

  while (i < numsSize)
  {
    j = 0;
    while (j < numsSize)
    {
        if (nums[i] + nums[j] == target)
        {
            ind++;
            tab[0] = j;
            tab[1] = i;
            break ;
        }
        j++;
    }
    i++;
  }

*returnSize = ind;
  return tab;
}



int main()
{
    int i = 0;
    int r_s = 0;
    int nums[4] = {2,7,11,15};
    int *tab;

    tab = twoSum(nums, 4, 9, &r_s);
    while (i < r_s)
    {
        if (i == 0)
            printf("[");
        printf("%d", tab[i]);
        if (i < r_s - 1)
            printf(",");
        i++;
    }
    printf("]");
    free(tab);

}
