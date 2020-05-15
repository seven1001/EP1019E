#include <stdio.h>

int main()
{
	int a;
	char b;
	double c;
	
	int *ptr_a;
	char *ptr_b;
	double *ptr_c;
	
	printf("\nDia chi cua bien a: %d",&a);
	printf("\nDia chi cua bien b: %d",&b);
	printf("\nDia chi cua bien c: %d",&c);
	printf("\nDia chi cua bien ptr_a: %d",&ptr_a);
	printf("\nDia chi cua bien ptr_b: %d",&ptr_b);
	printf("\nDia chi cua bien ptr_c: %d",&ptr_c);
	
	printf("\nGia tri cuar con tro ptr_a: %d", ptr_a);
	printf("\nGia tri cuar con tro ptr_b: %d", ptr_b);
	printf("\nGia tri cuar con tro ptr_c: %d", ptr_c);
	
	printf("\nsizeof con tro ptr_a: %d", sizeof(ptr_a));
	printf("\nsizeof con tro ptr_b: %d", sizeof(ptr_b));
	printf("\nsizeof con tro ptr_c: %d", sizeof(ptr_c));
	
	a =600;
	b='a';
	c= 3.14;
	ptr_a = &a;
	ptr_b = &b;
	ptr_c = &c;
	
	printf("\nGia tri cuar con tro ptr_a: %d", ptr_a);
	printf("\nGia tri cuar con tro ptr_b: %d", ptr_b);
	printf("\nGia tri cuar con tro ptr_c: %d", ptr_c);
	
	printf("\nGia tri cuar a: %d", *ptr_a);
	printf("\nGia tri cuar b: %c", *ptr_b);
	printf("\nGia tri cuar c: %f", *ptr_c);
	
	ptr_b = ptr_a;
	printf("\nGia tri cuar con tro ptr_b: %d", ptr_b);
	printf("\nGia tri cua o nho con tro ptr_b: %d", *ptr_b);
	
	ptr_a --;
	printf("\nGia tri cuar con tro ptr_a: %d", ptr_a);
	printf("\nGia tri cua o nho con tro ptr_a: %d", *ptr_a);

	printf("\nGia tri cuar con tro ptr_b: %d", ptr_b);
	printf("\nGia tri cua o nho con tro ptr_b: %d", *++ptr_b);
	printf("\nGia tri cuar con tro ptr_b: %d", ptr_b);
	
}
