

#include <stdio.h>
#include <stdlib.h>



//============================
#if 0
/*
struct student
{
	int no;
	char name[30];
};
*/

struct student{
	char c;
	short s;
	int i;
};

int main(int argc, char *argv[])
{
	/*
	char a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i]=255;
	}
	scanf("%s", a);
	for (int i = 0; i < 10; i++)
	{
		printf("0x%.2X\n", a[i]&0xFF);
	}
	*/
	/*
	int a[20];
	for (int i=0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("0x%.2X\n", a[i]&0xFF);
	}	
	*/
	/*
	struct student s1, *p;
	p=(struct student*)malloc(sizeof(struct student));
	p->no=1;
	printf("%d\n", p->no);
	*/
	/*
	putchar('a');
	putchar('b');
	putchar('\n');
	*/

	/*
	FILE* fp = fopen("a.txt", "r");
	char a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i]=0x20;
	}
	
	fgets(a, 3, fp);
	
	for (int i = 0; i < 10; i++)
	{
		printf("0x%.2X\n", a[i]&0xFF);
	}
	*/
	struct student s1;
	printf("size: %d\n", sizeof(s1));
	
	
	return 0;
}

#endif




//=================char is the first========================
//We must check the current max cell len. If it is a larger value, then we must use padding!!!
//
// We must check whether the size of the struct is n multiple of 4 bytes.
//
#if 0
struct student{
	char c;
	short s;
	int i;
};

int main(int argc, char *argv[])
{
	struct student s1;
	s1.c=1;
	s1.s=2;
	s1.i=3;
	printf("size: %d\n", sizeof(s1));  //8 bytes=1 + 1(padding) + 2 + 4
	char* p=&s1;
	for (int i = 0; i < 8; i++)
	{
		printf("0x%.2X ", *(p+i));
	}
	printf("\n");
	return 0;
}
#endif



#if 0
struct student{
	char c;
	int i;
	short s;
};

int main(int argc, char *argv[])
{
	struct student s1;
	s1.c=1;
	s1.s=2;
	s1.i=3;
	printf("size: %d\n", sizeof(s1));  //12 bytes
	char* p=&s1;
	for (int i = 0; i < 12; i++)
	{
		printf("0x%.2X ", *(p+i));
	}
	printf("\n");
	return 0;
}

#endif








//=================short is the first========================


#if 0
struct student{
	short s;
	char c;
	int i;
};

int main(int argc, char *argv[])
{
	struct student s1;
	s1.c=1;
	s1.s=2;
	s1.i=3;
	printf("size: %d\n", sizeof(s1));  //8 bytes=1 + 1(padding) + 2 + 4
	char* p=&s1;
	for (int i = 0; i < 8; i++)
	{
		printf("0x%.2X ", *(p+i));
	}
	printf("\n");
	return 0;
}

#endif






#if 0
struct student{
	short s;
	int i;
	char c;
};

int main(int argc, char *argv[])
{
	struct student s1;
	s1.c=1;
	s1.s=2;
	s1.i=3;
	printf("size: %d\n", sizeof(s1));  //12 bytes
	char* p=&s1;
	for (int i = 0; i < 12; i++)
	{
		printf("0x%.2X ", *(p+i));
	}
	printf("\n");
	return 0;
}

#endif








//=================int is the first========================


#if 0
struct student{
	int i;
	char c;
	short s;
};

int main(int argc, char *argv[])
{
	struct student s1;
	s1.c=1;
	s1.s=2;
	s1.i=3;
	printf("size: %d\n", sizeof(s1));  //8 bytes=1 + 1(padding) + 2 + 4
	char* p=&s1;
	for (int i = 0; i < 8; i++)
	{
		printf("0x%.2X ", *(p+i));
	}
	printf("\n");
	return 0;
}

#endif






#if 0
struct student{
	int i;
	short s;
	char c;
};

int main(int argc, char *argv[])
{
	struct student s1;
	s1.c=1;
	s1.s=2;
	s1.i=3;
	printf("size: %d\n", sizeof(s1));  //8 bytes
	char* p=&s1;
	for (int i = 0; i < 8; i++)
	{
		printf("0x%.2X ", *(p+i)&0xFF);
	}
	printf("\n");
	return 0;
}

#endif








//=================short is the first(with pack(1), It is easy!!!)========================
//
// We must check whether the size of the struct is n multiple of 1 byte(It is always OK).
//
#if 0
#pragma pack(1)
struct student{
	short s;
	char c;
	int i;
};

int main(int argc, char *argv[])
{
	struct student s1;
	s1.c=1;
	s1.s=2;
	s1.i=3;
	printf("size: %d\n", sizeof(s1));  //7 bytes=1 + 2 + 4
	char* p=&s1;
	for (int i = 0; i < 7; i++)
	{
		printf("0x%.2X ", *(p+i));
	}
	printf("\n");
	return 0;
}
#pragma pack()
#endif






#if 0
#pragma pack(1)

struct student{
	short s;
	int i;
	char c;
};

int main(int argc, char *argv[])
{
	struct student s1;
	s1.c=1;
	s1.s=2;
	s1.i=3;
	printf("size: %d\n", sizeof(s1));  //7 bytes
	char* p=&s1;
	for (int i = 0; i < 7; i++)
	{
		printf("0x%.2X ", *(p+i));
	}
	printf("\n");
	return 0;
}
#pragma pack()

#endif




//==============================================
// This is the little endian bit machine, If there is a big endian bit machine, it is different!!!
//==============================================
#if 0
struct student{
	char c:1;
	short s:2;
	int i:6;
};

int main(int argc, char *argv[])
{
	struct student s1;
	memset(&s1, 0, sizeof(s1));
	s1.c=1;
	s1.s=2;
	s1.i=63;
	printf("size: %d\n", sizeof(s1)); //the struct is four-byte length
	char* p=&s1;
	for (int i = 0; i < 4; i++)
	{
		printf("0x%.2X ", *(p+i)&0xFF);
	}
	printf("\n");
	int a=*(int*)(&s1);
	printf("0x%04x\n", a); //0x01fd. Each bit is put from low address to high address
	return 0;
}
#endif



#if 0
int main()
{
	//int: 4 bytes, long=8bytes
	long a[]={10, 20, 50, 30, 40, 60, 70, 80,90,45};
	int bytes_count= sizeof(a);
	printf("bytes_count: %d\n", bytes_count);
	int long_size_count=sizeof(long);
	printf("long_size_count: %d\n", long_size_count);

	return 0;
}
#endif




#if 1
void quick_sort(int* a, int low, int high)
{
	if (low >= high)
	{
		return;
	}
	int pivot = a[low];
	int i = low;
	int j = high;
	while (j > i)
	{
		while (j > i && a[j] > pivot)
		{
			j--;
		}
		a[i] = a[j];
		i++;

		//
		while(i < j && a[i] < pivot)
		{
			i++;
		}
		a[j] = a[i];
		j--;
	}
	a[i] = pivot;
	quick_sort(a, low, i - 1);
	quick_sort(a, i + 1, high);
}


int main()
{
	int a[]={10, 20, 50, 30, 40, 60, 70, 80,90,45};
	int bytes_count= sizeof(a);
	printf("bytes_count: %d\n", bytes_count);
	int int_size_count=sizeof(int);
	printf("int_size_count: %d\n", int_size_count);
	int len = sizeof(a)/sizeof(int);
	printf("len: %d\n", len);
	quick_sort(a, 0, len - 1);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", a[i]);	
	}
	printf("\n");
	return 0;
}
#endif














