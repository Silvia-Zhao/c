#define  _CRT_SECURE_NO_WARNINGS 1
//������ǰ��ָ�뷨
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
//�ݹ�ȱ�㣬���ݹ�������࣬���׵���ջ���
//�ݹ�-->�ǵݹ�
//1.�ĳ�ѭ��
//
//
//
//
//�ݹ�
void RP(ListNode* head)
{
	if (head == NULL)
		return;
	RP(head->next)
		printf("%d", head->val);
}

//
//�鲢����
//�ʺ�������
void _MergeSort(int* a, int left, int right, int tmp)

{
	if (left==right)
	{
		return;
	}

	int mid = left + (right - left) / 2;
	//[left,mid][mid+1,right]�ֱ�����
	_MergeSort(a, left,mid,tmp);
	_MergeSort(a, mid,right,tmp);

	//a[left,mid]a[mid+1,right]�鲢��tmp[left,right]
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
