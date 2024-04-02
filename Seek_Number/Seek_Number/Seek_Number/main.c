#define _CRT_SECURE_NO_DEPRECATE    
/*#include <stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int k = 3;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz-1;
	int mid = 0;
	while(left < right) {
		mid = (left + right) / 2;
		if (k < arr[mid]) {
			right = mid - 1;
		}
		else if(k == arr[mid]) {
			;
		}
		else {
			left = mid + 1;
		}
		printf("找到了，数组下标:%d", mid);
	}
	if(left > right){
		printf("程序出错，请检查!\n");
	}

	return 0;
}
此代码有错误,未修正
*/

//for循环方式

#include <stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int k = 15;
	for (i = 0; i <= sz - 1; i++)
	{
		if (k == arr[i])
		{
			printf("找到了，数组下标为:%d", i);
			break;
		}
		else if(i == sz-1 ){
			printf("查找失败！\n");
		}
	}
	return 0;
}

