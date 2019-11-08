#define  _CRT_SECURE_NO_WARNINGS 1
//单项走前后指针法
int PartSort3(int* a, int left, int right)
{
	int key = a[right];
	int prev = left - 1, cur = left;
	while (cur < right)
	{
		if (a[cur] < key&&++prev != cur)
		{
			Swap(&a[cur], &a[prev]);
		}
		++cur;
	}
	++prev;
	Swap(&a[right], &a[prev]);

	return prev;
}
//递归缺点，当递归次数过多，容易导致栈溢出
//递归-->非递归
//1.改成循环
//
//
//
//
//递归
void RP(ListNode* head)
{
	if (head == NULL)
		return;
	RP(head->next)
		printf("%d", head->val);
}

//
//归并排序
//适合外排序
void _MergeSort(int* a, int left, int right, int tmp)

{
	if (left==right)
	{
		return;
	}

	int mid = left + (right - left) / 2;
	//[left,mid][mid+1,right]分别有序
	_MergeSort(a, left,mid,tmp);
	_MergeSort(a, mid,right,tmp);

	//a[left,mid]a[mid+1,right]归并到tmp[left,right]
	int begin1 = left, end1 = mid;
	int begin2 = mid+1, end1 = right;
	int i = left;
	while (begin1<=end1&&)
	{

	}
}

void _MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int)*n);
		_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
}

//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
