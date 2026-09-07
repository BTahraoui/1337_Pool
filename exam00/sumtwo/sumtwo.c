#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int *answer;
	int i;
	int j;

	answer = malloc(2 * sizeof(int));
	i = 0;
	while (i < numsSize)
	{
		j = i + 1;
		while (j < numsSize)
		{
			if (nums[i] + nums[j] == target)
			{
				answer[0] = i;
				answer[1] = j;
				*returnSize = 2;
			}
			j++;
		}
		i++;
	}
	return (answer);
} 