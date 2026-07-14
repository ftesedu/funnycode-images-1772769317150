#include <stdio.h>


typedef struct {
	char name[100];
	int age;
}Student;

void getinformation(Student *ds){
		fgets(ds->name, sizeof(ds->name), stdin);
		if(ds->name[strlen(ds->name)-1]=='/n'){
			ds->name[strlen(ds->name)-1]='/0';
		}
		scanf("%d", &ds->age);
		getchar();
}

void display(Student ds){
		printf("Name: %sAge: %d", ds.name, ds.age);
}


int main(){
	Student a;
	getinformation(&a);
	display(a);
}