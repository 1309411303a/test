#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int main()
//{
//	//int arr[10] = { 0 };//10������Ԫ�ص�����
//	//int sz = 0;
//	////10*sizeof(int) = 40
//	//printf("%d\n", sizeof(arr));
//	////����������Ԫ�صĸ���
//	////���� = �����ܴ�С/ÿ��Ԫ�صĴ�С
//	//sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("sz = %d\n",sz);
//
//	//int a = 10;
//	////sizeof ������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
//	//printf("%d\n",sizeof(a));//aռ4���ֽ�
//	//printf("%d\n", sizeof(int));//�ڶ��ֱ�ʾ����
//	//printf("%d\n", sizeof a);//������д��
//	return 0;
//}


//��Ŀ������
//˫Ŀ������
//��Ŀ������
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//˫Ŀ��������+�Ա���������������
//	//c���������Ǳ�ʾ����ã�
//	//0-��
//	//��0-��
//	//int a = 10;
//	int a = -2;
//	int b = -a;
//	int c = +3;//+���Ŷ��ᱻʡ��
//	printf("%d\n", a);
//	printf("%d\n", !a);//!���٣��ٱ���
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	a = 20;//= ��ֵ    == �ж����
//	a = a + 10;//1
//	a += 10;//2�ȼ�
//	a = a - 20;
//	a -= 20;//�ȼ�
//	a = a & 2;
//	a &= 2;//�ȼ�
//	//��Щ���Ǹ��ϸ�ֵ��
//	//+=  -=  *=  /=  %=  >>=  &=  |=  ^=

//	return 0;
//}


//int main ()
//{
//	//(2���ƣ�λ����
//	//& ��λ�루ȡ������1���棬0�Ǽ٣�
//	//| ��λ��(ȡ������
//	//^ ��λ��򣨲��Ǵη�-�����
//
//	/*int a = 3;
//	int b = 5;
//	int c = a & b;*/
//
//	/*int a = 3;
//	int b = 5;
//	int c = a | b;*/
//
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//    //���ļ�����ɣ�
//	/*��Ӧ�Ķ�����λ��ͬ����Ϊ0
//	��Ӧ�Ķ�����λ���죬��Ϊ1*/
//
//	//������
//	//011
//	//101
//	//001����λ�룩
//	//111(��λ��
//	//110����λ���
//
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	//�ƣ�2���ƣ�λ������
//	//<<����
//	//>>����
//	int a = 1;
//	//����1ռ4���ֽ�-32bitλ
//	//00000000000000000000000000000001
//	int b = a << 2;
//	//b = a+1
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 5 % 2;//ȡģ
//	printf("%d\n", a);
//	return 0;
//}


//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����10���������ֵ�����
//	//0-9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
	//printf("%d\n", arr[4]);//�±�ķ�ʽ����Ԫ��
	//arr[�±�];
	//char ch[20];
	//float arr2[5];
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	//sum=num1+num2;
//	sum = Add(num1, num2);
//	//sum=a+b;
//	sum = Add(a,b);
//	sum = Add(2,3);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}
//��������:
//f(x)= 2*x+1;
//f(x,y)=x+y;



//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while(line<20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	printf("��offer\n");
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��?��1/0)>:");
//	scanf("%d",&input);//1/0
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//
//	return 0;
//}


//int main()
//{
//	//printf("%c\n", '\x61');
//	//("%d\n",strlen("c:\test\32\test.c"));
//	//printf("%c\n", '\132');
//    //\32 --32��2��8��������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//32 -- > 10���� 26-- >��ΪASCII��ֵ������ַ�
//	return 0;
//}


//int main()
//{
//	/*printf("c:\\test\\32\\test.c");
//	printf("%c\n", '\'');
//	printf("%s\n","\"" );*/
//	//\t -ˮƽ�Ʊ��
//	return 0;
//}


//int main()
//{
//	printf("abc\n");
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' ,'\0'};
//	printf("%d\n", strlen(arr1));//strlen-string length-�����ַ�������
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
	//�����ڼ�����ϴ洢��ʱ�򣬴洢����2����
	//#av$
	//a -97
	//A -65
	//...
	//ASCII ����
	//ASCII ��ֵ
	//char arr1[] = "abc";//����
	////"abc"--'a' 'b' 'c' '\0' --'\0'�ַ����Ľ�����־
	//char arr2[] = { 'a','b','c',0 };
	////'\0'-0
	////'a' -97
	////'a' 'b' 'c'
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);

	//return 0;
//}


//int float
//char
//�ַ�������
//int main()
//{
//	"abcdef";
//	"hello bit";
//	"";//���ַ���
//	return 0;
//}


//4.ö�ٳ���
//ö��-һһ�о�
//�Ա�:�У�Ů������
//��ԭɫ����,�ƣ���
//���ڣ�1,2��3,4,5��6,7

//ö�ٹؼ� -enum

//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE,
//};
//
//int main()
//{
//	enum Color color = BLUE;
//color=YELLOW
////BLUE=6;//error
//
//	return 0;
//}

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRET-ö�ٳ���
//int main()
//{
//	//enum Sex s=FEMALE
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}

//3.#define ����ı�ʶ������
//#define MAX 10
//
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}



//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d,&num1,&num2");
//
//	//scan��c�����ṩ�ģ������п�ƽ̨�ԣ�����ֲ�ԡ�
//	//scanf s���Ǳ�׼c�����ṩ�ģ���vs�������ṩ�ġ�
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//
//	return 0;
//}
//}
//strcpy
//strlen
//strcat
//...
//����ȫ��
//strcpy_s


//int main()
//{
	//const-������
	 //const int n = 10;//n�Ǳ������������г����ԣ���������˵n�ǳ�����
	//int arr[n] = { 0 };
	// n = 20;

	//2.const���εĳ�����
	/*const int num = 4;
	printf("%d\n", num);
	num = 8;
	printf("%d\n", num);*/
		//1.���泣��
	//3;
	//100;
	//3.14;
	//return 0;
//}