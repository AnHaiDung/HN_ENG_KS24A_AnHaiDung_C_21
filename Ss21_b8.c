#include <stdio.h>

struct Students{
	char id[15];
	char name[50];
	int age;
};
int main(){
	struct Students sv[100];
	int size,i;
	FILE *fptr;
	fptr= fopen("sinhvien.txt","r");
	i=0;
	while(fscanf(fptr,"%s %s %d",sv[i].id, sv[i].name, &sv[i].age)!=EOF){
		i++;
	}
	size=i;
	fclose(fptr);
	for (int i=0;i<size;i++){
		printf("sinh vien thu %d\n",i+1);
		printf("id: %s\n", sv[i].id);
        printf("ten sinh vien: %s\n", sv[i].name);
        printf("tuoi sinh vien: %d\n", sv[i].age);
	}
	return 0;
}

