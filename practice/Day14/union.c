#include<stdio.h>
#include<string.h>
union book
{
	int pages;
	char author[30];
	float price;
};
int main(void)
{
	union book b;
	union book *ptr=&b;
	b.pages=100;
	b.price=100.50;
	strcpy(b.author,"Brandon sanderson");
	printf("\n pages:%d, author:%s,price:%.2f",b.pages,b.author,b.price);
	printf("\naccessing via pointer\n pages:%d, author:%s, price:%.2f",ptr->pages,ptr->author,ptr->price);
	return 0;
}
