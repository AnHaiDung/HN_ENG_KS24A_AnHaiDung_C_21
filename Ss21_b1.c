#include <stdio.h>

int main(){
	FILE *fptr;
	fptr= fopen("bt01.txt","w");
	char  text[100];
	printf("nhap mot chuoi bat ki ");
	fgets(text,100,stdin);
	fprintf(fptr,"%s", text);
	return 0;
}

