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
		printf("�ҵ��ˣ������±�:%d", mid);
	}
	if(left > right){
		printf("�����������!\n");
	}

	return 0;
}
�˴����д���,δ����
*/

//forѭ����ʽ

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
			printf("�ҵ��ˣ������±�Ϊ:%d", i);
			break;
		}
		else if(i == sz-1 ){
			printf("����ʧ�ܣ�\n");
		}
	}
	return 0;
}

