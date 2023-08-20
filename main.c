#include <stdio.h>
#include <stdlib.h>

/*Bir iþaretçi kullanarak dizenin uzunluðunu hesaplayan C'de bir program yazýn*/

int main() {
	
	char dizi[100];
	char *ptr;
	
	printf("lutfen bir karakter dizisi giriniz\n");
	gets(dizi);
	
	for(ptr=dizi;*ptr;ptr++)
	{
		
	}
	
	printf("dizimiz %s %d kadar karakterden olusmaktadýr",dizi,ptr-dizi);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
