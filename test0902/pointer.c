#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int test(int arr[])
//{
//	
//}
//int main()
//{
//
//	int arr[10] = { 0 };
//	//test(arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", sz);
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";
//	//*p = 'W';
//	printf("%s", *p);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcd";
//	char* p1 = "abcd";
//	char* p2 = "abcd";
//	if (p1 == p2)
//	{
//		printf("haha");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}


//指针数组

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			int ret=*(parr[i] + j);
//			printf("%d ", ret);
//		}
//		printf("\n");
//		
//		
//	}
//	return 0;
//}

//数组指针
//int main()
//{
//
//	char* arr[5];
//	char(*pa)[5] = &arr;
//	return 0;
//}


//int main() {
//    int arr[5] = { 1, 2, 3, 4, 5 };
//    /*int* p = arr;
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", *(p + i));
//    }*/
//
//    //int(*pArr)[5] = &arr;  // 指向整个数组的指针
//
//    //// 使用指针访问数组并打印每个元素
//    //for (int i = 0; i < 5; i++) {
//    //    printf("Element %d: %d\n", i, (*pArr)[i]);
//    //}
//
//    int(*pArr)[5] = &arr;  // 指向整个数组的指针
//
//    // 使用指针访问数组并打印每个元素
//    for (int i = 0; i < 5; i++) {
//        printf("Element %d: %d\n", i, *(*pArr+i));
//    }
//
//    return 0;
//}

void Print(int arr[3][5], int x, int y)//参数是数组的形式
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void Print1(int(*p)[5], int x, int y)//参数是指针的形式
{
	int i = 0; 
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			//printf("%d ", *(*(p + i) + j));
			//printf("%d ", *(p[i]) + j);
			//printf("%d ", (*(p + i))
			// 
			// [j]);
			printf("%d ", p[i][j]);


		}
		printf("\n");


	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,6,7},{3,4,5,6,7} };
	Print(arr, 3, 5);
	Print1(arr, 3, 5);
	return 0;
}