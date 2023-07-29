#include<stdio.h>
#include<string.h>
struct book{
	int pages;
	char author[30];
	char bookname[15];
	float price;
};
int main(void)
{
	struct book b;
	struct book *ptr=&b;
	b.pages=1034;
	strcpy(b.author,"Brandon sanderson");
	strcpy(b.bookname,"Oathbringer");
	b.price=110.84;
	printf("\n accessing values by variable: \n pages:%d,author:%s;bookname:%s,price:%.2f",b.pages,b.author,b.bookname,b.price); 
	printf("\nby ptr:\n pages:%d,author%s;bookname:%s,price:%.2f",ptr->pages,ptr->author,ptr->bookname,ptr->price);
	return 0;
}
