#include  <iostream>
#include  <stdlib.h>
using namespace std;

//���ַ�
/*
	����һ������A��Ŀ��ֵΪT����T��A�е�λ��
	1.��LΪ0��RΪn-1
	2.���L>R,��������ʧ�ܸ���
	3.��m���м�ֵԪ�أ�Ϊ"(L+R)/2"
	4.���Am<T����LΪm+1���ص�����2
	5.���Am>T����RΪm-1���ص������
	6.��Am=T�������������ش�ֵm
*/

//�Ⱦ���������������
//ע�������������з�Χ�ģ�����L+(R-L)/2���ʽ������
//ע��start=mid+1��end=mid-1,��ֹ��ѭ��
//�����������Թ���

//�������Ա���
//���ҵ�һ��/���һ����target��ȵ�Ԫ��
//�������һ��С��target/��һ������target��Ԫ��
//�������ת(4,5,6,1,2,3)

int num_search(int* arr,int num, int key)
{
	int start = 0, end = num-1,mid;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (arr[mid] < key)
			start = mid + 1;
		else if (arr[mid] > key)
			end = mid - 1;
		else
			return mid;
	}
	return -1;
}

int my_search(int arr[], int num, int key)
{
	int start = 0, end = num - 1, mid;
	while (start <= end)
	{
		mid = start + (end - start) / 2;
		if (arr[mid] < key)
			start = mid + 1;
		else if (arr[mid] > key)
			end = mid - 1;
		else
			return mid;
	}
	return -1;
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "the number is" << my_search(arr,10, 8);
	system("pause");
}