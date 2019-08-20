#include  <iostream>
#include  <stdlib.h>
using namespace std;

//二分法
/*
	给定一个数组A，目标值为T查找T在A中的位置
	1.令L为0，R为n-1
	2.如果L>R,则搜索以失败告终
	3.令m（中间值元素）为"(L+R)/2"
	4.如果Am<T，令L为m+1并回到步骤2
	5.如果Am>T，令R为m-1并回到步骤二
	6.当Am=T，搜索结束；回传值m
*/

//先决条件：有序数组
//注意数据类型是有范围的，采用L+(R-L)/2表达式更合适
//注意start=mid+1和end=mid-1,防止死循环
//数据量不可以过大

//常见面试变种
//查找第一个/最后一个与target相等的元素
//查找最后一个小于target/第一个大于target的元素
//数组的旋转(4,5,6,1,2,3)

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