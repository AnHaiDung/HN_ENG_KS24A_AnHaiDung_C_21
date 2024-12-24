#include <stdio.h>

struct Students{
	char id[50];
	char name[50];
	int age;
};

int main(){
	int size=0;
	struct Students sv[100];
	FILE *fptr;
	fptr= fopen("sinhvien.txt","w");
	printf("nhap so luong sinh vien ");
	scanf("%d",&size);
	getchar();
	for (int i=0;i<size;i++){
		printf("sinh vien thu %d \n",i+1);
		printf("id: ");
		fgets(sv[i].id,15,stdin);
		sv[i].id[strcspn(sv[i].id, "\n")] = 0;
		printf("ten: ");
		fgets(sv[i].name,50,stdin);
		sv[i].name[strcspn(sv[i].name, "\n")] = 0;
		printf("tuoi: ");
		scanf("%d",&sv[i].age);
		getchar();
		fprintf(fptr,"%s"" %s"" %d\n",sv[i].id,sv[i].name,sv[i].age);
	}
	fclose(fptr);
	return 0;
}

