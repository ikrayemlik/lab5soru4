#include <stdio.h>
#include <stdlib.h>

/*Bir i�aret�i kullanarak dizenin uzunlu�unu hesaplayan C'de bir program yaz�n*/

int main() {
	
	char dizi[100];
	char *ptr;
	
	printf("lutfen bir karakter dizisi giriniz\n");
	gets(dizi);
	
	for(ptr=dizi;*ptr;ptr++)
	{
		
	}
	
	printf("dizimiz %s %d kadar karakterden olusmaktad�r",dizi,ptr-dizi);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
