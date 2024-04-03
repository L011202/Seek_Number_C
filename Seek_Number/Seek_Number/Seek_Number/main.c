#define _CRT_SECURE_NO_DEPRECATE    
#include <stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int k = 3;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz-1;
	int mid = 0;
	while(left < right) {			//正常情况
		mid = (left + right) / 2;	//找数组中间的数进行判断
		if (k < arr[mid]) {			//arr[mid]大于要找的元素
			right = mid - 1;		
		}
		else if(arr[mid] < k){		//arr[mid]小于要找的元素
			left = mid + 1;
		}
		else{
		printf("找到了，数组下标:%d", mid);
		break;//在找到数组下标后，需要用break跳出循环
		}
	}
	if(left > right){				//异常处理
		printf("程序出错，请检查!\n");
	}
	return 0;
}


//for循环方式
//代码正确，已经debug
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int k = 15;
//	for (i = 0; i <= sz - 1; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，数组下标为:%d", i);
//			break;
//		}
//		else if(i == sz-1 ){
//			printf("查找失败！\n");
//		}
//	}
//	return 0;
//}

