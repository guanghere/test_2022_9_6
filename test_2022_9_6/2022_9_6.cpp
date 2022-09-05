#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<string.h>

//	编写一个函数 reverse_string(char * string)（递归实现）

//void reverse_string(char arr[])
//{
//	int sz = strlen(arr);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}

//void reverse_string(char *str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str+len-1;
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}

//void reverse_string(char* str)	
//{
//
//
//
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}




//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int j = 0;
//	while (n>9)
//	{
//		int i = n % 10;
//		n = n / 10;
//		j += i;
//		if (n < 9)
//		{
//			j = j + n;
//			break;
//		}
//	}
//	printf("%d", j);
//	return 0;
//}


//	写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//int DigitSum(unsigned int  n)
//{
//	if (n > 9)
//		return	DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int j = DigitSum(n);
//	printf("%d", j);
//	return 0;
//}


//	编写一个函数实现n的k次方，使用递归实现。

#include<math.h>
int main()
{
	int n = 0, j = 0;
	scanf("%d %d", &n, &j);
	double ret = pow(n, j);
	printf("%lf", ret);
	return 0;
}

//double power(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return n * power(n ,k - 1);
//	else   /*k < 1(负数) */
//		return 1.0 / power(n, -k);
//}
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = power(n, k);
//	printf("%lf", ret);
//}