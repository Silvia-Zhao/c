#define  _CRT_SECURE_NO_WARNINGS 1
int binary_search(int arr1[], int k,int left,int right)
{
	while(left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr1[mid]>k)
		{
			right = mid - 1;
		}
		else if (arr1[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = (sizeof(arr1) / sizeof(int)) - 1;
	int ret = binary_search(arr1, 7, left, right);
	if (ret==-1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了,下标是：%d\n", ret);
	}
	system("pause");
	return 0;
}